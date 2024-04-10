#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 6;
    struct NationalPark parks[arraySize];

    addNationalParks(parks, arraySize);

    printNationalParks(parks, arraySize);

    return 0;
}

