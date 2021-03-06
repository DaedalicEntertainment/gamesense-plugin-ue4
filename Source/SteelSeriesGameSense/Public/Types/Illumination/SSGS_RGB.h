/**
* Authors: sharkgoesmad
*
* Copyright (c) 2019 SteelSeries ApS. All Rights Reserved.
*/
#pragma once


#include "SSGS_RGB.generated.h"


USTRUCT( BlueprintType, meta = ( Category = "Gamesense|Types" ) )
struct STEELSERIESGAMESENSE_API FSSGS_RGB {

    GENERATED_BODY()

    UPROPERTY( EditAnywhere, BlueprintReadWrite ) uint8 red;
    UPROPERTY( EditAnywhere, BlueprintReadWrite ) uint8 green;
    UPROPERTY( EditAnywhere, BlueprintReadWrite ) uint8 blue;

};
