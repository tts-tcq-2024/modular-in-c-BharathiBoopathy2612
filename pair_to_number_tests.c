#include <stdio.h>
#include <assert.h>
#include "pair_number_from_color_finder.h"
#include "pair_to_number_tests.h"

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
