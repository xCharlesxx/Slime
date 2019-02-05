#pragma once
#include "Engine/Classes/Engine/TextureRenderTarget.h"



class RTManiplulator
{
public:
	RTManiplulator();
	~RTManiplulator();
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Game")
	static void setTextureRenderTarget();
	//UTextureRenderTarget* texRTRef
};

