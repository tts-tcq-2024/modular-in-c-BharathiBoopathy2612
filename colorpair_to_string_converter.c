#include <stdio.h>
#include "colorpair_to_string_converter.h"
#include "color_codes.h"
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
            MajorColorNames[colorPair->majorColor],
            MinorColorNames[colorPair->minorColor]);
}
