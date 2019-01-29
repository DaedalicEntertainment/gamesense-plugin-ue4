/**
* authors: sharkgoesmad
*
* Copyright (c) 2019 SteelSeries
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#pragma once


#include "Common/SSGS_JsonConvertable.h"
#include "SSGS_TactileEffectCustom.generated.h"


USTRUCT( BlueprintType, meta = ( Category = "GameSense|Types" ) )
struct STEELSERIESGAMESENSE_API FSSGS_TactileEffectCustom : public FSSGS_JsonConvertable {

    GENERATED_BODY()


    FSSGS_TactileEffectCustom() : _type( TEXT( "custom" ) ) {}
    FSSGS_TactileEffectCustom( int32 length_ms, int32 delay_ms = 0 ) : length_ms( length_ms ), delay_ms( delay_ms ), _type( TEXT( "custom" ) ) {}

    UPROPERTY( EditAnywhere, BlueprintReadWrite ) int32 length_ms;
    UPROPERTY( EditAnywhere, BlueprintReadWrite ) int32 delay_ms;

    TSharedPtr< FJsonValue > Convert() const;
    const FString& type() { return _type; }

private:

    FString _type;

};