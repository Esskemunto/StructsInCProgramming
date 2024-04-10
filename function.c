#include <stdio.h>
#include "function.h"

void addNationalParks(struct NationalPark *parksArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for National Park %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", parksArray[i].name);
        printf("County: ");
        scanf("%s", parksArray[i].county);
        printf("Size: ");
        scanf("%f", &parksArray[i].size);
        printf("Rating: ");
        scanf("%d", &parksArray[i].rating);
        printf("Climate Key: ");
        scanf("%s", parksArray[i].climateKey);
    }
}

void printNationalParks(struct NationalPark *parksArray, int arraySize) {
    printf("\nNational Park Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("National Park %d:\n", i + 1);
        printf("Name: %s\n", parksArray[i].name);
        printf("County: %s\n", parksArray[i].county);
        printf("Size: %.2f\n", parksArray[i].size);
        printf("Rating: %d\n", parksArray[i].rating);
        printf("Climate Key: %s\n", parksArray[i].climateKey);
    }
}

