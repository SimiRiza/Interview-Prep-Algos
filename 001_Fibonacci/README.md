# 001 - Fibonacci Numbers

## Problem Description
Compute the nth Fibonacci number. The Fibonacci sequence is defined as:

- F(0) = 0
- F(1) = 1
- F(n) = F(n-1) + F(n-2) for n > 1

## Approaches Implemented

| File | Approach | Time Complexity | Space Complexity | Notes |
|------|----------|----------------|-----------------|-------|
| [001_Fibonacci_Recursive.cpp](001_Fibonacci_Recursive.cpp) | Brute-force recursion | O(2^n) | O(n) recursion stack | Simple, direct translation of Fibonacci definition. Inefficient for large n. |
| [001_Fibonacci_Iterative.cpp](001_Fibonacci_Iterative.cpp) | Iterative approach | O(n) | O(1) | Efficient, handles n ≤ 30 easily, avoids recursion stack overhead. |

## Example
