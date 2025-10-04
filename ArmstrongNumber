# Armstrong Number

## Problem Description
An Armstrong number is an integer such that the sum of its digits raised to the power of 
the number of digits equals the number itself.

**Example:**  
Input: 9474  
Output: true (9^4 + 4^4 + 7^4 + 4^4 = 9474)

## Approaches

### 1️⃣ Integer Precompute (`1_IntegerPrecompute.cpp`)
- Precompute powers for digits 0–9 using integer multiplication.
- Pure integer arithmetic → no floating-point rounding errors.
- **Time:** O(d), **Space:** O(1)

### 2️⃣ Manual Multiplication (`2_ManualMultiplication.cpp`)
- Compute powers manually using a nested loop.
- Integer-only, safe, but slightly less efficient.
- **Time:** O(d²), **Space:** O(1)

### 3️⃣ Using `pow()` function (`3_PowFunction.cpp`)
- Standard library pow() for digit powers.
- Simple, but uses floating-point math → small FP risk.
- **Time:** O(d log d), **Space:** O(1)

## Notes
- All approaches handle numbers ≥ 0.
- Edge cases, floating-point issues, and optimizations are discussed in comments of each file.
