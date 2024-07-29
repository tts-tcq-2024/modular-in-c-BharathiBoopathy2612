#ifndef TEST_COLORPAIR_H
#define TEST_COLORPAIR_H

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif // TEST_COLORPAIR_H
