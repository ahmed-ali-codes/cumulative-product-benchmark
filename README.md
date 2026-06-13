# Cumulative Product Benchmark

## Overview

This project compares two different approaches to compute cumulative products of a random integer array. The objective is to demonstrate the difference in execution time between a **direct multiplication approach** and an **optimized cumulative product approach**.

## Problem Statement

Given an array **A** of size `N = 1000` filled with random integers between 1 and 50, generate another array **B** such that:

> **B[i]** = A[0] × A[1] × ... × A[i]

This process is performed using two solutions:

1. **Solution 1** — Direct multiplication at every index (*O(N²)* time complexity)
2. **Solution 2** — Optimized approach using cumulative product (*O(N)* time complexity)

---

## 🔁 Solution 1: Direct Multiplication

### Pseudocode

```
BEGIN MAIN
    DECLARE A[N], B[N]
    CALL generateRandomArray1(A, N)
    start1 = clock()
    CALL calculateArrayB_Direct1(A, B, N)
    end1 = clock()
    time_taken1 = (end1 - start1) / CLOCKS_PER_SEC
    PRINT time_taken1
    CALL printArray1(B, N)
END MAIN
```

### Functions

| Function | Description |
|----------|-------------|
| `generateRandomArray1` | Fills array A with random values between 1 and 50 |
| `calculateArrayB_Direct1` | For each B[i], multiplies all elements A[0] through A[i] |
| `printArray1` | Prints all values in array B |

### Complexity

- **Time:** O(N²)
- **Space:** O(N)

---

## ⚡ Solution 2: Optimized Multiplication

### Pseudocode

```
BEGIN MAIN
    DECLARE A[SIZE], B[SIZE]
    CALL generateRandomArray2(A, SIZE)
    start_time = CURRENT_TIME()
    CALL calculateArrayB_Optimized2(A, B, SIZE)
    end_time = CURRENT_TIME()
    execution_time = end_time - start_time
    PRINT execution_time
    CALL printArray2(B, SIZE)
END MAIN
```

### Functions

| Function | Description |
|----------|-------------|
| `generateRandomArray2` | Fills array A with random values between 1 and 50 |
| `calculateArrayB_Optimized2` | Computes B[i] = B[i-1] × A[i], reusing the previous result |
| `printArray2` | Prints all values in array B |

### Complexity

- **Time:** O(N)
- **Space:** O(N)

---

## 🧪 Comparison

| Metric | Solution 1 | Solution 2 |
|---|---|---|
| Time Complexity | O(N²) | O(N) |
| Performance | Slower (nested loop) | Faster (single loop) |
| Use Case | Educational purpose | Real-world systems |

---

## 🛠️ Compilation & Execution

### Solution 1 (Direct Multiplication)

```bash
gcc -o solution1 main1.c operations1.c
./solution1
```

### Solution 2 (Optimized Multiplication)

```bash
gcc -o solution2 main2.c operations2.c
./solution2
```

---

## 📁 Project Structure

```
cumulative-product-benchmark/
├── main1.c            # Entry point for Solution 1 (direct)
├── operations1.c      # Implementation of direct multiplication functions
├── operations1.h      # Header for Solution 1
├── main2.c            # Entry point for Solution 2 (optimized)
├── operations2.c      # Implementation of optimized multiplication functions
├── operations2.h      # Header for Solution 2
├── Pseudocode.pdf     # Pseudocode documentation
└── README.md
```

---

## 📌 Note

Both solutions assume that the product of array elements will not exceed the maximum range of integers. For real-world systems, consider using `long long` or arbitrary-precision libraries to avoid overflow.

---

## 👨‍💻 Author

**Ahmed Ali**
