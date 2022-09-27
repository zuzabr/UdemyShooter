// Shooter Game All the Rights Reserved


#include "Player/DefaultChar.h"
#include "Player/CMC_Shooter.h"
#include "Player/HealthComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Controller.h"
#include "Weapon/WeaponComponent.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"


DEFINE_LOG_CATEGORY_STATIC(DefaultCharacterLog, All, All);

// Конструктор
ADefaultChar::ADefaultChar(const FObjectInitializer& ObjectInit) : Super(ObjectInit.SetDefaultSubobjectClass<UCMC_Shooter>(ACharacter::CharacterMovementComponentName))
{

	PrimaryActorTick.bCanEverTick = true;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>("HealthComponent");
	WeaponComponent = CreateDefaultSubobject<UWeaponComponent>("WeaponComponent");
}

void ADefaultChar::BeginPlay()
{
	Super::BeginPlay();

	check(HealthComponent);
	
	check(GetCharacterMovement());
	check(GetMesh());

	OnHealthChanged(HealthComponent->GetHealth());
	HealthComponent->OnDeath.AddUObject(this, &ADefaultChar::OnDeath); // Привязка функции на делегат
	HealthComponent->OnHealthChanged.AddUObject(this, &ADefaultChar::OnHealthChanged);

	LandedDelegate.AddDynamic(this, &ADefaultChar::OnGroundLanded);

	
}


void ADefaultChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



bool ADefaultChar::IsSprinting() const
{
	return false;
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

UHealthComponent* ADefaultChar::GetHealth(APawn* PlayerPawn) const
{
	if (!PlayerPawn) return nullptr;
	const auto Component = HealthComponent;
	return Component;
	
}



void ADefaultChar::OnDeath()
{
	UE_LOG(DefaultCharacterLog, Display, TEXT("Player is dead"));

	//PlayAnimMontage(DeathAnimMontage);


	GetCharacterMovement()->DisableMovement();
	SetLifeSpan(5.0f);

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	WeaponComponent->StopFire();

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetMesh()->SetSimulatePhysics(true);

	UGameplayStatics::PlaySoundAtLocation(GetWorld(), DeathSound, GetActorLocation());
}

void ADefaultChar::OnHealthChanged(float Health)
{
	
}

void ADefaultChar::OnGroundLanded(const FHitResult& Hit)
{
	const auto FallVelocityZ = -GetCharacterMovement()->Velocity.Z;
	UE_LOG(DefaultCharacterLog, Display, TEXT("The falling velocity is %.0f"), FallVelocityZ);

	if (FallVelocityZ < LandedDamageVelocity.X) return;

	const auto FinalDamage = FMath::GetMappedRangeValueClamped(LandedDamageVelocity, LandedDamage, FallVelocityZ);
	TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
}



void ADefaultChar::SetPlayerColor(const FLinearColor& Color)
{
	const auto MaterialInst = GetMesh()->CreateAndSetMaterialInstanceDynamic(0);
	if (!MaterialInst) return;

	MaterialInst->SetVectorParameterValue(MaterialColorName, Color);
}