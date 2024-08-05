#include <stdio.h>
#include<string.h>
#include "colorpair_to_string_converter.h"
#include "color_from_pair_number_finder.h"

#define MAX_BUFFER_SIZE 1024
#define MAX_LINE_SIZE 20

const char* generate_reference_manual() {
    static char reference_manual[MAX_BUFFER_SIZE];
    static char line[MAX_LINE_SIZE];
    reference_manual[0] = '\0'; // Initialize the string
    strcat(reference_manual, "Color Code Reference Manual\n");
    strcat(reference_manual, "----------------------------\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPair colorPair = GetColorFromPairNumber(i);
        ColorPairToString(&colorPair, colorPairNames);
        snprintf(line, sizeof(line), "%d: %s\n", i, colorPairNames);
        strcat(reference_manual, line);
        }
    return reference_manual;
}
