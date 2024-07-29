#include "test_colorpair.h"
#include "colorcode_mapping.h"
#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS 16

// Test function to validate pair number to ColorPair conversion
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
