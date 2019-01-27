#pragma once


#include "SSGS_ColorEffectSpecification.h"
#include "SSGS_ColorRange.h"
#include "SSGS_ColorEffectSpecificationRanges.generated.h"


UCLASS( BlueprintType, meta = ( Category = "GameSense|Types" ) )
class STEELSERIESGAMESENSE_API USSGS_ColorEffectSpecificationRanges : public USSGS_ColorEffectSpecification {

    GENERATED_BODY()

public:

    /**
    * Properly constructs USSGS_ColorEffectSpecificationRanges object.
    *
    * @param    v Array of color range variants.
    * @return   USSGS_ColorEffectSpecificationRanges object.
    */
    UFUNCTION( BlueprintCallable, BlueprintPure, Category = "GameSense|ColorEffectSpecification" )
    static USSGS_ColorEffectSpecificationRanges* MakeRangeColorEffect( const TArray< FSSGS_ColorRange >& v );

    /**
    * Constructs a color range with a static color.
    *
    * @param    low Low end (inclusive) of the range.
    * @param    high High end (inclusive) of the range.
    * @param    color RGB color specification for the range.
    * @return   FSSGS_ColorRange object.
    */
    UFUNCTION( BlueprintCallable, BlueprintPure, Category = "GameSense|ColorEffectSpecification" )
    static FSSGS_ColorRange MakeStaticColorRange( uint8 low, uint8 high, const FSSGS_RGB& color );

    /**
    * Constructs a color range with a gradient variant.
    *
    * @param    low Low end (inclusive) of the range.
    * @param    high High end (inclusive) of the range.
    * @param    zero Start color for the gradient.
    * @param    hundred End color for the gradient.
    * @return   FSSGS_ColorRange object.
    */
    UFUNCTION( BlueprintCallable, BlueprintPure, Category = "GameSense|ColorEffectSpecification" )
    static FSSGS_ColorRange MakeGradientColorRange( uint8 low, uint8 high, UPARAM( DisplayName = "Start Color" ) const FSSGS_RGB& zero, UPARAM( DisplayName = "End Color" ) const FSSGS_RGB& hundred );

    TSharedPtr< FJsonValue > Convert() const;

    UPROPERTY() TArray< FSSGS_ColorRange > ranges;

};