// Fill out your copyright notice in the Description page of Project Settings.


#include "RTManipulation.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Engine/Classes/Engine/Texture2D.h"
#include "Engine/Classes/Engine/StaticMesh.h"
#include "TimerManager.h"

//void ARTManipulation::SetCRenderTarget(UTextureRenderTarget2D * rt)
//{
//	RenderTarget = rt; 
//}
//
//FColor ARTManipulation::GetRenderTargetValue(float x, float y)
//{
//	return FColor();
//}

void ARTManipulation::SetDynamicMat(UMaterialInstanceDynamic * dm)
{
	MaterialDynamic = dm; 
	Coordinates = FVector2D(0, 0);
}

void ARTManipulation::SetDynamicMatPointer(UMaterialInstanceDynamic * dmp)
{
	MaterialDynamicPointer = dmp; 
}

void ARTManipulation::SetSlimeDestination(FVector2D coords)
{
	//UE_LOG(LogTemp, Warning, TEXT("CoordinatesB4: X:%d Y:%d"), coords.X, coords.Y);
	Coordinates = coords;// *1000;
	SlimesData.Empty(); 
	////Y
	//for (int32 row = 0; row < 10; row++)
	//{
	//	//X
	//	for (int32 col = 0; col < 10; col++)
	//	{
	//		SlimesData.Add(FVector2D(Coordinates.X + col, Coordinates.Y + row));
	//	}
	//}
	int aoe = 10;
	//Y
	for (int32 row = 0; row < height; row++)
	{
		//X
		for (int32 col = 0; col < width; col++)
		{
			if (row < Coordinates.Y + aoe && row > Coordinates.Y - aoe)
			{
				if (col < Coordinates.X + aoe && col > Coordinates.X - aoe)
				{
					//Spreading Slime
					RawData[row * width + col] = Slime;
					SlimesData.Add(FVector2D(col, row));
				}
			}
			//else
				//RawData[row * width + col] = noSlime;
		}
	}
	//Branching slime
	//BranchAlgorithm(FVector2D(600,900),Coordinates, _segLength, _branchProb, 1, _genPenalty, _sucThresh, _spd, _mxBranch);
}

void ARTManipulation::ClearSlime()
{
	for (int32 row = 0; row < height; row++)
	{
		for (int32 col = 0; col < width; col++)
		{
			RawData[row * width + col] = noSlime;
		}
	}
	SlimesData.Empty(); 
	DynamicTarget = FVector2D(-1, -1);
	LastKnownBranch = FVector2D(450, 900);
	numBranches = 0; 
	currentlyBranching = false; 
}

void ARTManipulation::UpdateParams(int segmentLength, float branchProbability, float generationPenalty, float speed, int maxBranches)
{
	_segLength = segmentLength; _branchProb = branchProbability; _genPenalty = generationPenalty; _spd = speed; _mxBranch = maxBranches; 
}



void ARTManipulation::BranchTowards(FVector2D coords)
{
	DynamicTarget = coords * 1000;
	if (!currentlyBranching)
	{
		DynamicBranchAlgorithm(LastKnownBranch, 1, _sucThresh);
		currentlyBranching = true;
	}
}

void ARTManipulation::BranchAlgorithm(FVector2D seedPos, FVector2D target, int segmentLength, float branchProbability, int generation, float generationPenalty, float successThreshold, float speed, int maxBranches)
{
	_segLength = segmentLength; _branchProb = branchProbability; _genPenalty = generationPenalty; _sucThresh = successThreshold; _spd = speed; _mxBranch = maxBranches; 

	float probability = FMath::RandRange((float)0, (float)1);
	//Make branches of branches more likely to die
	if (generation != 1 && (generationPenalty * generation) > probability)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Branch Died"));
		numBranches--; 
		return;
	}

	//Probability to Create new branch
	if (probability < branchProbability && numBranches < maxBranches)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Branch Created"));
		numBranches++; 
		BranchAlgorithm(seedPos, target, segmentLength, branchProbability, generation + 1, generationPenalty, successThreshold, speed, maxBranches);
	}

	float currentDistance = FVector2D::Distance(seedPos, target); 
	float newDistance = currentDistance; 
	FVector2D randomPos = FVector2D::ZeroVector; 
	int breakThreshold = 0; 

	//If position is closer than current position 
	while (currentDistance <= newDistance)
	{
		//Make sure there's no infinite loop
		breakThreshold++;
		if (breakThreshold > 1000)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Something went Wrong Searching for New Branch Node"));
			return;
		}

		//Pick random position within segmentLength squares
		randomPos = FVector2D(seedPos.X + (FMath::RandRange(-segmentLength, segmentLength)),
										seedPos.Y + (FMath::RandRange(-segmentLength, segmentLength)));

		//Check if out of bounds
		if (randomPos.X > width - 1 || randomPos.X <= 0 || randomPos.Y > height - 1 || randomPos.Y <= 0)
			continue;

		//Calculate if new pos is closer
		newDistance = FVector2D::Distance(target, randomPos);
	}

	//If new position is already slime, break
	if (RawData[randomPos.Y * width + randomPos.X] == Slime && generation != 1)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Forward position already Slime"));
		numBranches--; 
		return;
	}

	//Create line between two points 
	BresenhamLine(seedPos.X, seedPos.Y, randomPos.X, randomPos.Y);
	//UE_LOG(LogTemp, Warning, TEXT("Line Created between points: %f,%f and %f,%f"), seedPos.X, seedPos.Y, randomPos.X, randomPos.Y);

	//If we have reached destination
	if (newDistance < successThreshold)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Destination Reached, Distance to destination: %f"), newDistance);
		return;
	}

	//Recursive call Branch algorithm continue branch
	FTimerDelegate TimerDel; 
	FTimerHandle TimerHandle; 
	TimerDel.BindUFunction(this, FName("BranchAlgorithm"), randomPos, target, segmentLength, branchProbability, generation, generationPenalty, successThreshold, speed, maxBranches);
	GetWorldTimerManager().SetTimer(TimerHandle,TimerDel, speed, false);
	//UE_LOG(LogTemp, Warning, TEXT("Recursed"));
}

void ARTManipulation::DynamicBranchAlgorithm(FVector2D seedPos, int generation, float successThreshold)
{
	if (DynamicTarget == FVector2D(-1, -1))
		return; 

	float probability = FMath::RandRange((float)0, (float)1);
	//Make branches of branches more likely to die
	if (generation != 1 && (_genPenalty * generation) > probability)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Branch Died"));
		numBranches--;
		return;
	}

	//Probability to Create new branch
	if (probability < _branchProb && numBranches < _mxBranch)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Branch Created"));
		numBranches++;
		DynamicBranchAlgorithm(seedPos, generation + 1, successThreshold);
	}

	float currentDistance = FVector2D::Distance(seedPos, DynamicTarget);
	float newDistance = currentDistance;
	FVector2D randomPos = FVector2D::ZeroVector;
	int breakThreshold = 0;

	if (currentDistance == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Error, Start pos and Destination are the same: %f, %f"), DynamicTarget.X, DynamicTarget.Y);
		currentlyBranching = false;
		return;
	}

	//If position is closer than current position 
	while (currentDistance <= newDistance)
	{
		//Make sure there's no infinite loop
		breakThreshold++;
		if (breakThreshold > 1000)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Something went Wrong Searching for New Branch Node"));
			if (generation == 1)
				currentlyBranching = false; 
			return;
		}

		//Pick random position within segmentLength squares
		randomPos = FVector2D(seedPos.X + (FMath::RandRange(-_segLength, _segLength)),
			seedPos.Y + (FMath::RandRange(-_segLength, _segLength)));

		//Check if out of bounds
		if (randomPos.X > width - 1 || randomPos.X <= 0 || randomPos.Y > height - 1 || randomPos.Y <= 0)
			continue;

		//Calculate if new pos is closer
		newDistance = FVector2D::Distance(DynamicTarget, randomPos);
	}

	//If new position is already slime, break
	if (RawData[randomPos.Y * width + randomPos.X] == Slime && generation != 1)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Forward position already Slime"));
		numBranches--;
		return;
	}

	//Create line between two points 
	BresenhamLine(seedPos.X, seedPos.Y, randomPos.X, randomPos.Y);
	LastKnownBranch = randomPos; 
	//UE_LOG(LogTemp, Warning, TEXT("Line Created between points: %f,%f and %f,%f"), seedPos.X, seedPos.Y, randomPos.X, randomPos.Y);

	//If we have reached destination
	if (newDistance < successThreshold)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Destination Reached, Distance to destination: %f"), newDistance);
		currentlyBranching = false; 
		SetSlimeDestination(DynamicTarget); 
		return;
	}

	//Recursive call Branch algorithm continue branch
	FTimerDelegate TimerDel;
	FTimerHandle TimerHandle;
	TimerDel.BindUFunction(this, FName("DynamicBranchAlgorithm"), randomPos, generation, successThreshold);
	GetWorldTimerManager().SetTimer(TimerHandle, TimerDel, _spd, false);
	//UE_LOG(LogTemp, Warning, TEXT("Recursed"));
}

void ARTManipulation::BresenhamLine(int x1, int y1, int const x2, int const y2)
{
	int delta_x(x2 - x1);
	//If x1 == x2, then it does not matter what we set here
	signed char const ix((delta_x > 0) - (delta_x < 0));
	delta_x = std::abs(delta_x) << 1;

	int delta_y(y2 - y1);
	//If y1 == y2, then it does not matter what we set here
	signed char const iy((delta_y > 0) - (delta_y < 0));
	delta_y = std::abs(delta_y) << 1;

	RawData[y1 * width + x1] = Slime;

	if (delta_x >= delta_y)
	{
		//Error may go below zero
		int error(delta_y - (delta_x >> 1));

		while (x1 != x2)
		{
			//Reduce error, while taking into account the corner case of error == 0
			if ((error > 0) || (!error && (ix > 0)))
			{
				error -= delta_x;
				y1 += iy;
			}
			//Else do nothing
			error += delta_y;
			x1 += ix;

			RawData[y1 * width + x1] = Slime;
		}
	}
	else
	{
		//Error may go below zero
		int error(delta_x - (delta_y >> 1));

		while (y1 != y2)
		{
			//Reduce error, while taking into account the corner case of error == 0
			if ((error > 0) || (!error && (iy > 0)))
			{
				error -= delta_y;
				x1 += ix;
			}
			//Else do nothing
			error += delta_x;
			y1 += iy;

			RawData[y1 * width + x1] = Slime;
		}
	}
}

//int dx, dy, p, x, y;
//
//dx = x1 - x0;
//dy = y1 - y0;
//
//x = x0;
//y = y0;
//
//p = 2 * dy - dx;
//
//while (x < x1)
//{
//	if (p >= 0)
//	{
//		RawData[y * width + x] = Slime;
//		y = y + 1;
//		p = p + 2 * dy - 2 * dx;
//	}
//	else
//	{
//		RawData[y * width + x] = Slime;
//		p = p + 2 * dy;
//	}
//	x = x + 1;
//}

FVector2D ARTManipulation::SpreadTexture()
{
	//Pick random point of possible traversable points 
	FVector2D slim = SlimesData[FMath::RandRange(0, SlimesData.Num() - 1)];

	//If location is the colour of slime
	if (RawData[slim.Y * width + slim.X] == Slime)
	{
		bool up = false, down = false, left = false, right = false; 
		//While all four directions have not yet been traversed
		while (!(up && down && left && right))
			switch (FMath::RandRange(0, 3))
			{
			case 0:
				up = true; 
				if (slim.Y != height - 1)
					if (RawData[(slim.Y + 1) * width + slim.X] == noSlime)
					{
						RawData[(slim.Y + 1) * width + slim.X] = Slime;
						return FVector2D(slim.X, slim.Y + 1);
					}
				break;
			case 1:
				down = true; 
				if (slim.Y != 0)
					if (RawData[(slim.Y - 1) * width + slim.X] == noSlime)
					{
						RawData[(slim.Y - 1) * width + slim.X] = Slime;
						return FVector2D(slim.X, slim.Y - 1);
					}
				break;
			case 2:
				left = true; 
				if (slim.X != width - 1)
					if (RawData[slim.Y * width + (slim.X + 1)] == noSlime)
					{
						RawData[slim.Y * width + (slim.X + 1)] = Slime;
						return FVector2D(slim.X + 1, slim.Y);
					}
				break;
			case 3:
				right = true;
				if (slim.X != 0)
					if (RawData[slim.Y * width + (slim.X - 1)] == noSlime)
					{
						RawData[slim.Y * width + (slim.X - 1)] = Slime;
						return FVector2D(slim.X - 1, slim.Y);
					}
				break;
			default:
				break;
			}
		//If no spare spaces around slime, remove slime
		SlimesData.Remove(slim);
		return FVector2D(-1,-1); 
	}
	
	//Should never reach here
	UE_LOG(LogTemp, Warning, TEXT("Something went Wrong in SpreadTexture"));
	return FVector2D(-1, -1);
}

//FVector2D ARTManipulation::SpreadTexture()
//{
//	//Pick random point of possible traversable points 
//	FVector2D slim = SlimesData[FMath::RandRange(0, SlimesData.Num() - 1)];
//
//	//If location is the colour of slime
//	if (RawData[slim.Y * width + slim.X] == Slime)
//	{
//		//Check all four directions around square and if not slime, make slime
//		if (slim.Y != height - 1)
//			if (RawData[(slim.Y + 1) * width + slim.X] == noSlime)
//			{
//				RawData[(slim.Y + 1) * width + slim.X] = Slime;
//				return FVector2D(slim.X, slim.Y + 1);
//			}
//
//		if (slim.Y != 0)
//			if (RawData[(slim.Y - 1) * width + slim.X] == noSlime)
//			{
//				RawData[(slim.Y - 1) * width + slim.X] = Slime;
//				return FVector2D(slim.X, slim.Y - 1);
//			}
//
//		if (slim.X != width - 1)
//			if (RawData[slim.Y * width + (slim.X + 1)] == noSlime)
//			{
//				RawData[slim.Y * width + (slim.X + 1)] = Slime;
//				return FVector2D(slim.X + 1, slim.Y);
//			}
//
//		if (slim.X != 0)
//			if (RawData[slim.Y * width + (slim.X - 1)] == noSlime)
//			{
//				RawData[slim.Y * width + (slim.X - 1)] = Slime;
//				return FVector2D(slim.X - 1, slim.Y);
//			}
//
//
//		//Once no spare spaces around slime, remove slime
//		SlimesData.Remove(slim);
//		return FVector2D(-1, -1);
//	}
//
//	//Should never reach here
//	UE_LOG(LogTemp, Warning, TEXT("Something went Wrong in SpreadTexture"));
//	return FVector2D(-1, -1);
//}

// Sets default values
ARTManipulation::ARTManipulation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARTManipulation::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < height*width; i++)
		RawData.Add(noSlime);
}

// Called every frame
void ARTManipulation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

	//RawData.Reset();

	if (MaterialDynamic == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Material Dynamic returned Null"));
		return; 
	}
	
	//MaterialDynamic->SetVectorParameterValue("DrawLocation", FLinearColor(locationx, locationy, 0, 255));

	//MaterialDynamic->VectorParameterValues.GetData(); 
	//width = MaterialDynamic->GetWidth(); 
	//height = MaterialDynamic->GetHeight();
	if (SlimesData.Num() != 0)
	{
		spreadSpeed = 100;
		for (int i = 0; i < spreadSpeed; i++)
			if (SlimesData.Num() != NULL)
			{
				FVector2D place2Spread = SpreadTexture();
				//If not null add 
				if (place2Spread != FVector2D(-1, -1))
					SlimesData.Add(place2Spread);
				if (i == spreadSpeed - 1)
					spreadTimer--;
			}

		if (SlimesData.Num() != NULL)
		{
			if (spreadTimer < 0)
			{
				SlimesData.Empty();
				spreadTimer = 10000;
			}
		}
	}
	//	spreadSpeed = 0; 
	//}
	//else
	//	spreadSpeed++; 

	//If texture has changed, update texture
	if (RawData != PreRawData)
	{
		UTexture2D* texture = UTexture2D::CreateTransient(width, height);
		//UTexture2D* texture = MaterialDynamic->param 
		FTexture2DMipMap& Mip = texture->PlatformData->Mips[0];
		void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
		//if (RawData.GetAllocatedSize == 512*512)
		FMemory::Memcpy(Data, RawData.GetData(), (width * height * 4));
		Mip.BulkData.Unlock();
		texture->UpdateResource();
		MaterialDynamic->SetTextureParameterValue("TextureToAdd", texture);
		PreRawData = RawData;
	}
	//MaterialDynamic->

	//uint8* raw = NULL;
	//FTexture2DMipMap& Mip = texture->PlatformData->Mips[0];
	//void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
	//raw = (uint8*)Data;
	//// read here in low level:
	////let's say I want pixel x = 300, y = 23
	////basic formula, data[channels * (width * y + x)];
	////FColor pixel = FColor(0, 0, 0, 255);
	////pixel.B = raw[4 * (640 * y + x) + 0];
	////pixel.G = raw[4 * (640 * y + x) + 1];
	////pixel.R = raw[4 * (640 * y + x) + 2];
	//FColor test;
	//for (FColor node : RawData)
	//{
	//	if (node != test)
	//		//UE_LOG(LogTemp, Warning, TEXT("Node Colour: R:%d G:%d B:%d A:%d"), node.R, node.G, node.B, node.A);
	//		test = node;
	//	node = FColor(255, 255, 255, 255);
	//}
	//Mip.BulkData.Unlock();
	//texture->UpdateResource();

	//UTextureRenderTarget* TextureRenderTarget = NULL;
	// Read the pixels from the RenderTarget and store them in a FColor array
	//TArray<FColor> *SurfData = new TArray<FColor>();
	//FTextureRenderTarget2DResource *textureResource = (FTextureRenderTarget2DResource*)RenderTarget->GetTextureRenderTarget2DResource();
	//FTextureRenderTarget2DResource* textureResource = (FTextureRenderTarget2DResource*)MaterialDynamic->Resources;
	//MaterialDynamic->SetVectorParameterValue("Colour",);
	//if (!MaterialDynamic->texture->ReadPixels(SurfData))
	//{
	//	//Didn't work
	//	UE_LOG(LogTemp, Warning, TEXT("Couldn't read Texture Resrouce"));
	//}
	//// Creates Texture2D to store TextureRenderTarget content
	//UTexture2D *Texture = UTexture2D::CreateTransient(TextureRenderTarget->SizeX, TextureRenderTarget->SizeY, PF_B8G8R8A8);
	//#if WITH_EDITORONLY_DATA
	//Texture->MipGenSettings = TMGS_NoMipmaps;
	//#endif
	//Texture->SRGB = TextureRenderTarget->SRGB;

	//UE_LOG(LogTemp, Warning, TEXT("Start"));
	// Edit pixels 
	//for (FColor node : RawData)
	//{
	//	if (node != test)
	//	//UE_LOG(LogTemp, Warning, TEXT("Node Colour: R:%d G:%d B:%d A:%d"), node.R, node.G, node.B, node.A);
	//	test = node;
	//	node = FColor(255, 255, 255, 255);
	//}
	//for (FColor node : SurfData)
	//{
	//	if (node != test)
	//	//UE_LOG(LogTemp, Warning, TEXT("Node Colour2: R:%d G:%d B:%d A:%d"), node.R, node.G, node.B, node.A);
	//	test = node;
	//}
	
}

//void ARTManipulation::UpdateTextureRegion(UTexture2D * Texture, int32 MipIndex, FUpdateTextureRegion2D Region, uint32 SrcPitch, uint32 SrcBpp, uint8 * SrcData, bool bFreeData)
//{
//	if (Texture->Resource)
//	{
//		struct FUpdateTextureRegionsData
//		{
//			FTexture2DResource* Texture2DResource;
//			int32 MipIndex;
//			FUpdateTextureRegion2D Region;
//			uint32 SrcPitch;
//			uint32 SrcBpp;
//			uint8* SrcData;
//		};
//
//		FUpdateTextureRegionsData* RegionData = new FUpdateTextureRegionsData;
//
//		RegionData->Texture2DResource = (FTexture2DResource*)Texture->Resource;
//		RegionData->MipIndex = MipIndex;
//		RegionData->Region = Region;
//		RegionData->SrcPitch = SrcPitch;
//		RegionData->SrcBpp = SrcBpp;
//		RegionData->SrcData = SrcData;
//
//		{
//
//			ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(
//				UpdateTextureRegionsData,
//				FUpdateTextureRegionsData*, RegionData, RegionData,
//				bool, bFreeData, bFreeData,
//				{
//					int32 CurrentFirstMip = RegionData->Texture2DResource->GetCurrentFirstMip();
//					if (RegionData->MipIndex >= CurrentFirstMip)
//					{
//						RHIUpdateTexture2D(
//							RegionData->Texture2DResource->GetTexture2DRHI(),
//							RegionData->MipIndex - CurrentFirstMip,
//							RegionData->Region,
//							RegionData->SrcPitch,
//							RegionData->SrcData
//							+ RegionData->Region.SrcY * RegionData->SrcPitch
//							+ RegionData->Region.SrcX * RegionData->SrcBpp
//							);
//					}
//					// TODO is this leaking if we never set this to true??
//					if (bFreeData)
//					{
//						FMemory::Free(RegionData->SrcData);
//					}
//					delete RegionData;
//				});
//		}
//	}
//}

//void ARTManipulation::UpdateDynamicVectorTexture(const TArray<FLinearColor>& Source, UTexture2D* Texture)
//{
//	// Only handles 32-bit float textures
//	if (!Texture || Texture->GetPixelFormat() != PF_A32B32G32R32F) return;
//	// Shouldn't do anything if there's no data
//	if (Source.Num() < 1) return;
//
//	//UpdateTextureRegion(Texture, 0, FUpdateTextureRegion2D(0, 0, 0, 0, Texture->GetSizeX(), Texture->GetSizeY()), Texture->GetSizeX() * sizeof(FLinearColor), sizeof(FLinearColor), (uint8*)Source.GetData(), false);
//}
//
//UTexture2D* ARTManipulation::CreateTransientDynamicTexture(int32 Width, int32 Height, EPixelFormat PixelFormat /*= PF_A32B32G32R32F*/)
//{
//	auto* Texture = UTexture2D::CreateTransient(Width, Height, PixelFormat);
//	if (Texture)
//	{
//		Texture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
//		Texture->SRGB = 0;
//		Texture->UpdateResource();
//	}
//	return Texture;
//}
//
//void ARTManipulation::SetDynamicTextureAndIndex(class UStaticMeshComponent* Component, class UTexture2D* Texture, int32 Index, FName IndexParameterName, FName TextureParameterName)
//{
//	if (!Component || !Texture) return;
//	for (int32 i = 0; i < Component->GetNumMaterials(); i++)
//	{
//		/*auto* DynamicMaterial = FSlime::TryGetDynamicMaterial(Component, i);
//		if (!DynamicMaterial) continue;
//		FLinearColor CalculatedIndex(FMath::Fmod((float)Index, 64.0f) + 0.5f, FMath::FloorToFloat((float)Index / 64.0f) + 0.5f, 0.0f, 0.0f);
//		CalculatedIndex /= 64.0f;
//		DynamicMaterial->SetVectorParameterValue(IndexParameterName, CalculatedIndex);
//		DynamicMaterial->SetTextureParameterValue(TextureParameterName, Texture);*/
//	}
//}

