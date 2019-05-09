// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTManipulation.generated.h"


//class FRenderTarget; 

UCLASS()
class SLIME_API ARTManipulation : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category = "Charlie", EditAnywhere)
		UMaterialInstanceDynamic *MaterialDynamic = NULL;

	UPROPERTY(Category = "Charlie", EditAnywhere)
		UMaterialInstanceDynamic *MaterialDynamicPointer = NULL;

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void SetDynamicMat(UMaterialInstanceDynamic* dm); 

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void SetDynamicMatPointer(UMaterialInstanceDynamic* dmp);

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void SetSlimeDestination(FVector2D coords);

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void BranchTowards(FVector2D coords);

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void BranchAlgorithm(FVector2D seedPos, FVector2D target, int segmentLength, float branchProbability, int generation, float generationPenalty, float successThreshold, float speed, int maxBranches);

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void DynamicBranchAlgorithm(FVector2D seedPos, int generation, float successThreshold);

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void ClearSlime();

	UFUNCTION(BlueprintCallable, Category = "Charlie")
		void UpdateParams(int segmentLength, float branchProbability, float generationPenalty, float speed, int maxBranches);

	static ARTManipulation* Runnable; 

	FRunnableThread* Thread; 

	FThreadSafeCounter StopTaskCounter; 

	//UFUNCTION(BlueprintCallable, Category = "Charlie")
	//FColor GetRenderTargetValue(float x, float y);

private:
	TArray<FColor> RawData;
	TArray<FColor> PreRawData;
	TArray<FVector2D> SlimesData; 
	//Make this dynamic in future
	int32 width = 1000; 
	int32 height = 1000; 
	FVector2D Coordinates; 
	FVector2D DynamicTarget = FVector2D(450, 0);
	FVector2D LastKnownBranch = FVector2D(450, 900);
	FColor noSlime = FColor(0, 0, 0, 255);
	FColor Slime = FColor(255, 255, 255, 255);
	int spreadSpeed = 0; 
	int spreadTimer = 1000; 
	int numBranches = 0; 
	int _segLength = 3; 
	float _branchProb = 0.6; 
	int _genPenalty = 0.01; 
	float _sucThresh = 0.2;
	float _spd = 0.05; 
	int _mxBranch = 20; 
	bool currentlyBranching = false; 


	FVector2D SpreadTexture();
	void BresenhamLine(int x0, int y0, int const x1, int const y1);
public:	
	// Sets default values for this actor's properties
	ARTManipulation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	// Create a dynamic texture intended to be used for passing non-texture data
	// into materials. Defaults to 32-bit RGBA. The texture is not added to the
	// root set, so something else will need to hold a reference to it.
	//static UTexture2D* CreateTransientDynamicTexture(int32 Width, int32 Height, EPixelFormat PixelFormat = PF_A32B32G32R32F);
	//// Updates a region of a texture with the supplied input data. Does nothing
	//// if the pixel formats do not match.
	////static void UpdateTextureRegion(UTexture2D* Texture, int32 MipIndex, FUpdateTextureRegion2D Region, uint32 SrcPitch, uint32 SrcBpp, uint8* SrcData, bool bFreeData);
	//// Convenience wrapper for updating a dynamic texture with an array of
	//// FLinearColors.
	//static void UpdateDynamicVectorTexture(const TArray<FLinearColor>& Source, UTexture2D* Texture);
	//// Sets up a component's material instance parameters (on all materials) for
	//// use with the supplied UTexture. The proper parameters (specified by
	//// IndexParameterName and TextureParameterName) should exist on the
	//// material, otherwise this will not have the proper effect.
	//static void SetDynamicTextureAndIndex(class UStaticMeshComponent* Component, class UTexture2D* Texture, int32 Index, FName IndexParameterName, FName TextureParameterName);



};
