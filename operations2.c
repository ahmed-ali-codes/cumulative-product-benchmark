#include <stdio.h>
#include <stdlib.h>
#include "operations2.h"

// Generates random elements for array A
void generateRandomArray2(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 50 + 1; // Random number between 1 and 50
    }
}

// Optimized calculation of array B using cumulative multiplication
void calculateArrayB_Optimized2(int *A, int *B, int size)
{
    B[0] = A[0];
    for (int i = 1; i < size; i++)
    {
        B[i] = B[i - 1] * A[i];
    }
}

// Prints the array
void printArray2(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
