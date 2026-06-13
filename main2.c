#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations2.h"

int main()
{
    int N = 1000;
    int A[N], B[N];

    srand(time(0)); // Initialize random number generator
    generateRandomArray2(A, N);

    // Measure time for Solution 2 (Optimized Calculation)
    clock_t start2 = clock();
    calculateArrayB_Optimized2(A, B, N);
    clock_t end2 = clock();
    double time_taken2 = ((double)(end2 - start2)) / CLOCKS_PER_SEC;
    printf("Solution 2 (Optimized Multiplication) Time: %f seconds\n", time_taken2);

    printf("Array B (Solution 2 - Optimized Multiplication):\n");
    printArray2(B, N);

    return 0;
}
