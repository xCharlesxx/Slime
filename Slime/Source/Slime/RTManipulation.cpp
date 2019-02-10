// Fill out your copyright notice in the Description page of Project Settings.


#include "RTManipulation.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Engine/Classes/Engine/Texture2D.h"
#include "Engine/Classes/Engine/StaticMesh.h"

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
	UE_LOG(LogTemp, Warning, TEXT("CoordinatesB4: X:%d Y:%d"), coords.X, coords.Y);
	Coordinates = coords * 1000; 

	//for (int i = 0; i < )
	/*FMath::RoundToInt(Coordinates.X); 
	FMath::RoundToInt(Coordinates.Y);
	UE_LOG(LogTemp, Warning, TEXT("Coordinates: X:%d Y:%d"), coords.X, coords.Y);*/
}

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
		RawData.Add(FColor(0, 0, 0, 255));
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
					RawData[row * width + col] = (FColor(0, 0, 0, 255));
			}
			else
				RawData[row * width + col] = (FColor(255, 255, 255, 255));
		}
	}

	UTexture2D* texture = UTexture2D::CreateTransient(width, height);
	//UTexture2D* texture = MaterialDynamic->param 
	FTexture2DMipMap& Mip = texture->PlatformData->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
	//if (RawData.GetAllocatedSize == 512*512)
	FMemory::Memcpy(Data, RawData.GetData(), (width * height * 4));
	Mip.BulkData.Unlock();
	texture->UpdateResource();
	MaterialDynamic->SetTextureParameterValue("TextureToAdd", texture);
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

