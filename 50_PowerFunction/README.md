# 0050 Pow(x, n)

This folder contains **two approaches** to solve the LeetCode problem: [Pow(x, n)](https://leetcode.com/problems/powx-n/).

---

## Problem Statement

Implement the function `myPow(x, n)` which calculates **x raised to the power n** (`xⁿ`).

**Constraints:**  
- -100.0 < x < 100.0  
- -2³¹ ≤ n ≤ 2³¹ - 1  
- n is an integer.

---

## Solutions Overview

### 1. Iterative Fast Power  
**File:** [50_PowerFunction_Iterative.cpp](./50_PowerFunction_Iterative.cpp)  
**Description:**  
Uses exponentiation by squaring iteratively to reduce time complexity. Handles `INT_MIN` by adjusting `n` safely.  
**Pros:** Easy to debug, no recursion stack usage.  
**Cons:** Slightly more code than recursive version.  
**Time Complexity:** O(log n)  
**Space Complexity:** O(1)  
**Edge Cases:**  
- `n < 0`: handled by inverting `x`.  
- `n == INT_MIN`: adjusted before loop to avoid overflow.

---

### 2. Recursive Fast Power  
**File:** [50_PowerFunction_Recursive.c](./50_PowerFunction_Recursive.cpp)  
**Description:**  
Recursive implementation of exponentiation by squaring using divide-and-conquer logic.  
**Pros:** Clean mathematical expression, minimal code.  
**Cons:** Slight recursion overhead.  
**Time Complexity:** O(log n)  
**Space Complexity:** O(log n) (recursion stack)  
**Edge Cases:**  
- `n == 0`: returns 1.  
- `n < 0`: handled by inverting `x` and flipping the sign safely with a `long long` copy.

---

## ✅ Summary Comparison

| Aspect | Iterative | Recursive |
|--------|------------|------------|
| **Readability** | Straightforward loop | Cleaner mathematical expression |
| **Stack Usage** | Constant | Logarithmic |
| **Implementation** | Easier to debug | More elegant but requires recursion understanding |
| **Performance** | Slightly better | Slight overhead from recursion |

---

## 🎯 Core Idea

Both approaches apply **Exponentiation by Squaring**, a technique that reduces power computation from *O(n)* to *O(log n)* by repeatedly squaring the base and halving the exponent.

