#include "RTManiplulator.h"
#include "Engine/Classes/Engine/TextureRenderTarget.h"


RTManiplulator::RTManiplulator()
{
	//// Creates Texture2D to store TextureRenderTarget content
	//UTexture2D *Texture = UTexture2D::CreateTransient(TextureRenderTarget->SizeX, TextureRenderTarget->SizeY, PF_B8G8R8A8);
	//#if WITH_EDITORONLY_DATA
	//Texture->MipGenSettings = TMGS_NoMipmaps;
	//#endif
	//Texture->SRGB = TextureRenderTarget->SRGB;





	//// Lock and copies the data between the textures
	//void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	//const int32 TextureDataSize = SurfData.Num() * 4;
	//FMemory::Memcpy(TextureData, SurfData.GetData(), TextureDataSize);
	//Texture->PlatformData->Mips[0].BulkData.Unlock();
	//// Apply Texture changes to GPU memory
	//Texture->UpdateResource();
}


RTManiplulator::~RTManiplulator()
{
}
//UTextureRenderTarget* texRTRef
void RTManiplulator::setTextureRenderTarget()
{
	UTextureRenderTarget* TextureRenderTarget;
	// Read the pixels from the RenderTarget and store them in a FColor array
	TArray<FColor> SurfData;
	FRenderTarget *RenderTarget = TextureRenderTarget->GameThread_GetRenderTargetResource();
	RenderTarget->ReadPixels(SurfData);

	// Edit pixels 
	for (auto& node : SurfData)
	{
		node = FColor(1, 0, 0, 1);
	}
}