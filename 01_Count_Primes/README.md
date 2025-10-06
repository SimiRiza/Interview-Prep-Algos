# Count Primes

This folder contains three approaches to count how many prime numbers are less than a given integer `n`.

| Approach | File | Time Complexity | Space Complexity | Notes |
|----------|------|-----------------|-----------------|-------|
| Brute Force | [countPrimes_bruteforce.cpp](./countPrimes_bruteforce.cpp) | O(N * √N) | O(1) | Checks all divisors for every number |
| Optimized Brute Force | [countPrimes_optimized.cpp](./countPrimes_optimized.cpp) | O(N * √N) (faster) | O(1) | Skips even numbers and limits checks |
| Sieve of Eratosthenes | [countPrimes_sieve.cpp](./countPrimes_sieve.cpp) | O(N log log N) | O(N) | Most efficient |

## Problem Description
Given an integer `n`, return the count of prime numbers less than `n`.

## Edge Cases
- `n <= 2` → returns 0 (no primes less than 2)
- Large `n` values handled efficiently by the sieve

## How to Run
Compile any `.cpp` file and run:
```bash
g++ filename.cpp -o output
./output
