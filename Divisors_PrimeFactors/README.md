# Divisors and Prime Factors

This folder contains implementations for:
1. Printing all divisors (Naive and √N optimized)
2. Printing all prime factors of a number

| Approach | File | Time Complexity | Space Complexity | Description |
|----------|------|-----------------|------------------|--------------|
| Naive Divisors | [divisors_naive.cpp](./divisors_naive.cpp) | O(N) | O(1) | Loops through all numbers from 1 to n |
| √N Divisors | [divisors_sqrt.cpp](./divisors_sqrt.cpp) | O(√N) | O(1) | Prints both i and n/i for every divisor |
| Prime Factors | [primeFactors.cpp](./primeFactors.cpp) | O(√N) | O(1) | Prints only the prime divisors of n |

---

## Problem 1: Print All Divisors
Given an integer `n`, print all the numbers that divide it exactly.

**Example:**
Input: 36
Output: 1 2 3 4 6 9 12 18 36


---

## Problem 2: Print Prime Factors
Given an integer `n`, print all its prime factors.

**Example:**


Input: 84
Output: 2 2 3 7

---

## Edge Cases
- `n = 1` → No divisors except 1, no prime factors.
- Large `n` values handled efficiently by √N approach.
- For negative inputs, consider absolute value of `n`.

---
