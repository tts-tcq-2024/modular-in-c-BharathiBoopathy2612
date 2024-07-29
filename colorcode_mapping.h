#ifndef COLOR_MAPPING_H
#define COLOR_MAPPING_H

#include "color_pair.h"

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif
