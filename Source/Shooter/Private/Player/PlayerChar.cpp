// Shooter Game All the Rights Reserved


#include "Player/PlayerChar.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Weapon/WeaponComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"

APlayerChar::APlayerChar(const FObjectInitializer& ObjectInit) : Super(ObjectInit)
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(SpringArmComponent);

	CameraCollisionComponent = CreateDefaultSubobject<USphereComponent>("CameraCollisionComponent");
	CameraCollisionComponent->SetupAttachment(CameraComponent);
	CameraCollisionComponent->SetSphereRadius(10.0f);
	CameraCollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	
}

void APlayerChar::BeginPlay()
{
	Super::BeginPlay();
	check(CameraCollisionComponent);
	CameraCollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &APlayerChar::OnCameraCollisionBeginOverlap);
	CameraCollisionComponent->OnComponentEndOverlap.AddDynamic(this, &APlayerChar::OnCameraCollisionEndOverlap);

}

void APlayerChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	check(WeaponComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerChar::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerChar::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnAround", this, &APlayerChar::AddControllerYawInput);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerChar::Jump);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerChar::SprintOn);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayerChar::SprintOff);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, WeaponComponent, &UWeaponComponent::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, WeaponComponent, &UWeaponComponent::StopFire);
	PlayerInputComponent->BindAction("NextWeapon", IE_Pressed, WeaponComponent, &UWeaponComponent::NextWeapon);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, WeaponComponent, &UWeaponComponent::Reload);

}

void APlayerChar::OnCameraCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	CheckCameraOverlap();
}


void APlayerChar::OnCameraCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CheckCameraOverlap();
}

void APlayerChar::CheckCameraOverlap()
{
	const auto bHideMesh = CameraCollisionComponent->IsOverlappingComponent(GetCapsuleComponent());
	GetMesh()->SetOwnerNoSee(bHideMesh);

	TArray<USceneComponent*> MeshChildren;
	GetMesh()->GetChildrenComponents(true, MeshChildren);

	for (auto MeshChild : MeshChildren)
	{
		const auto MeshChildGeometry = Cast<UPrimitiveComponent>(MeshChild);
		if (MeshChildGeometry)
		{
			MeshChildGeometry->SetOwnerNoSee(bHideMesh);
		}
	}
}

void APlayerChar::MoveForward(float Scale)
{
	if (Scale == 0.0f) return;
	bMoveForward = (Scale > 0.0f);
	AddMovementInput(GetActorForwardVector(), Scale);
}

void APlayerChar::MoveRight(float Scale)
{
	if (Scale == 0.0f) return;
	AddMovementInput(GetActorRightVector(), Scale);
}

void APlayerChar::SprintOn()
{
	bRun = true;
}

void APlayerChar::SprintOff()
{
	bRun = false;
}

bool APlayerChar::IsSprinting() const
{
	return bRun && bMoveForward && !GetVelocity().IsZero();
}

void APlayerChar::OnDeath()
{
	Super::OnDeath();

	if (Controller)
	{
		Controller->ChangeState(NAME_Spectating);
	}

	
}

