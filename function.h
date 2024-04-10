#ifndef FUNCTION_H
#define FUNCTION_H

struct NationalPark {
    char name[100];
    char county[100];
    float size;
    int rating;
    char climateKey[50];
};

void addNationalParks(struct NationalPark *parksArray, int arraySize);
void printNationalParks(struct NationalPark *parksArray, int arraySize);

#endif

