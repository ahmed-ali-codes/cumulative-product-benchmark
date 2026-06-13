#include <stdio.h>
#include <stdlib.h>
#include "operations1.h"

// Generates random elements for array A
void generateRandomArray1(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 50 + 1; // Random number between 1 and 50
    }
}

// Calculates array B using direct multiplication for each element
void calculateArrayB_Direct1(int *A, int *B, int size)
{
    for (int i = 0; i < size; i++)
    {
        int product = 1;
        for (int j = 0; j <= i; j++)
        {
            product *= A[j];
        }
        B[i] = product;
    }
}

// Prints the array
void printArray1(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
