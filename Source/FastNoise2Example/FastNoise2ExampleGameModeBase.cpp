// Copyright Epic Games, Inc. All Rights Reserved.


#include "FastNoise2ExampleGameModeBase.h"
#include "FastNoise/FastNoise.h"

#include <string>
#include <stdio.h>

void AFastNoise2ExampleGameModeBase::InitGame(const FString &MapName, const FString &Options, FString &ErrorMessage)
{
    FastNoise::SmartNode<FastNoise::OpenSimplex2> os2Noise=FastNoise::New<FastNoise::OpenSimplex2>();
    FastSIMD::eLevel simdLevel=os2Noise->GetSIMDLevel();

    std::string simdName="Unknown";

    switch(simdLevel)
    {
    case FastSIMD::Level_Null:
        simdName="Level_Null";
        break;
    case FastSIMD::Level_Scalar:
        simdName="Level_Scalar";
        break;
    case FastSIMD::Level_SSE:
        simdName="Level_SSE";
        break;
    case FastSIMD::Level_SSE2:
        simdName="Level_SSE2";
        break;
    case FastSIMD::Level_SSE3:
        simdName="Level_SSE3";
        break;
    case FastSIMD::Level_SSSE3:
        simdName="Level_SSSE3";
        break;
    case FastSIMD::Level_SSE41:
        simdName="Level_SSE41";
        break;
    case FastSIMD::Level_SSE42:
        simdName="Level_SSE42";
        break;
    case FastSIMD::Level_AVX:
        simdName="Level_AVX";
        break;
    case FastSIMD::Level_AVX2:
        simdName="Level_AVX2";
        break;
    case FastSIMD::Level_AVX512:
        simdName="Level_AVX512";
        break;
    case FastSIMD::Level_NEON:
        simdName="Level_NEON";
        break;
    }

    std::cout<<"Current simd level "<<simdName<<"\n";
}

