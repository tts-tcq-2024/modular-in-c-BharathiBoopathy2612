#include "test_colorpair.h"
#include "colorcode_mapping.h"
#include <stdio.h>
#include <assert.h>

#define MAX_COLORPAIR_NAME_CHARS 16
// Test function to validate ColorPair to pair number conversion
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
