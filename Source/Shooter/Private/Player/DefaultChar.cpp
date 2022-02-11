// Shooter Game All the Rights Reserved


#include "Player/DefaultChar.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Player/CMC_Shooter.h"
#include "Player/HealthComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Controller.h"
#include "Weapon/WeaponComponent.h"


DEFINE_LOG_CATEGORY_STATIC(DefaultCharacterLog, All, All);

// Конструктор
ADefaultChar::ADefaultChar(const FObjectInitializer& ObjectInit) :Super(ObjectInit.SetDefaultSubobjectClass<UCMC_Shooter>(ACharacter::CharacterMovementComponentName))
{

	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(SpringArmComponent);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");

	HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>("Components");
	HealthTextComponent->SetupAttachment(GetRootComponent());

	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>("WeaponComponent");
}

void ADefaultChar::BeginPlay()
{
	Super::BeginPlay();

	check(HealthComponent);
	check(HealthTextComponent);
	check(GetCharacterMovement());

	OnHealthChanged(HealthComponent->GetHealth());
	HealthComponent->OnDeath.AddUObject(this, &ADefaultChar::OnDeath); // Привязка функции на делегат
	HealthComponent->OnHealthChanged.AddUObject(this, &ADefaultChar::OnHealthChanged);

	LandedDelegate.AddDynamic(this, &ADefaultChar::OnGroundLanded);

	
}

	



void ADefaultChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	
	
}


void ADefaultChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	check(WeaponComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADefaultChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADefaultChar::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ADefaultChar::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnAround", this, &ADefaultChar::AddControllerYawInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ADefaultChar::Jump);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ADefaultChar::SprintOn);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ADefaultChar::SprintOff);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, WeaponComponent, &UWeaponComponent::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, WeaponComponent, &UWeaponComponent::StopFire);
	PlayerInputComponent->BindAction("NextWeapon", IE_Pressed, WeaponComponent, &UWeaponComponent::NextWeapon);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, WeaponComponent, &UWeaponComponent::Reload);
	PlayerInputComponent->BindAction("Homework", IE_Pressed, this, &ADefaultChar::HomeWork);
}

bool ADefaultChar::IsSprinting() const
{
	return bRun && bMoveForward && !GetVelocity().IsZero();
}

float ADefaultChar::GetMovementDirection() const
{
	if (GetVelocity().IsZero()) return 0.0f;
	const auto VelocityNormal = GetVelocity().GetSafeNormal(); // auto - automatic identification on variable type
	const auto AngleBetween = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
	const auto CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);
	const auto Degrees = FMath::RadiansToDegrees(AngleBetween);
	return  CrossProduct.IsZero() ? Degrees : Degrees * FMath::Sign(CrossProduct.Z);
}

void ADefaultChar::MoveForward(float Scale)
{
	if (Scale == 0.0f) return;
	bMoveForward = (Scale > 0.0f);
	AddMovementInput(GetActorForwardVector(), Scale);
}

void ADefaultChar::MoveRight(float Scale)
{
	if (Scale == 0.0f) return;
	AddMovementInput(GetActorRightVector(), Scale);
}

void ADefaultChar::SprintOn()
{
	bRun = true;
}

void ADefaultChar::SprintOff()
{
	bRun = false;
}

void ADefaultChar::OnDeath()
{
	UE_LOG(DefaultCharacterLog, Display, TEXT("Player is dead"));

	PlayAnimMontage(DeathAnimMontage);


	GetCharacterMovement()->DisableMovement();
	SetLifeSpan(5.0f);

	if (Controller)
	{
		Controller->ChangeState(NAME_Spectating);
	}

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	WeaponComponent->StopFire();
}

void ADefaultChar::OnHealthChanged(float Health)
{
	HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%.0f"), Health)));
}

void ADefaultChar::OnGroundLanded(const FHitResult& Hit)
{
	const auto FallVelocityZ = -GetCharacterMovement()->Velocity.Z;
	UE_LOG(DefaultCharacterLog, Display, TEXT("The falling velocity is %.0f"), FallVelocityZ);

	if (FallVelocityZ < LandedDamageVelocity.X) return;

	const auto FinalDamage = FMath::GetMappedRangeValueClamped(LandedDamageVelocity, LandedDamage, FallVelocityZ);
	TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
}


void ADefaultChar::HomeWork()
{
	TArray<int32> Numbers{ 21,33,59,45,86 };
	int32* Result = Numbers.FindByPredicate([](int32 Value) { return Value % 5 == 4; });
	UE_LOG(DefaultCharacterLog, Display, TEXT("%i"), *Result)
}