#include "InventoryItem.h"

AInventoryItem::AInventoryItem() {
	this->ProjectileRoot = this->CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileRoot"));

	this->FirstPersonTransformRoot = this->CreateDefaultSubobject<USceneComponent>(TEXT("FirstPersonRoot"));
	this->FirstPersonTransformRoot->AttachTo(this->ProjectileRoot);

	this->ThirdPersonTransformRoot = this->CreateDefaultSubobject<USceneComponent>(TEXT("ThirdPersonRoot"));
	this->ThirdPersonTransformRoot->AttachTo(this->ProjectileRoot);

	this->ProjectileSmoothing = this->CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSmoothing"));
	this->ProjectileSmoothing->AttachTo(this->ProjectileRoot);

	this->StaticMesh = this->CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh0"));
	this->StaticMesh->AttachTo(this->ProjectileSmoothing);
}