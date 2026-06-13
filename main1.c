#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations1.h"

int main()
{
    int N = 1000;
    int A[N], B[N];

    srand(time(0)); // Initialize random number generator
    generateRandomArray1(A, N);

    // Measure time for Solution 1 (Direct Calculation)
    clock_t start1 = clock();
    calculateArrayB_Direct1(A, B, N);
    clock_t end1 = clock();
    double time_taken1 = ((double)(end1 - start1)) / CLOCKS_PER_SEC;
    printf("Solution 1 (Direct Multiplication) Time: %f seconds\n", time_taken1);

    printf("Array B (Solution 1 - Direct Multiplication):\n");
    printArray1(B, N);

    return 0;
}
