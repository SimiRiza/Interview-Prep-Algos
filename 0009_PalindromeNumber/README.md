# 0009 Palindrome Number

This folder contains **four approaches** to solve the LeetCode problem: [Palindrome Number](https://leetcode.com/problems/palindrome-number/).

---

## Problem Statement

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

**Examples:**
Input: 121      Input: -121     Input: 10
Output: true    Output: false   Output: false


**Constraints:** -2³¹ ≤ x ≤ 2³¹ - 1

---

## Solutions Overview

1. **String Reversal** ([PalindromeNumber_String.cpp](./PalindromeNumber_String.cpp))  
   - **Description:** Convert the number to a string, reverse using `std::reverse`, compare with the original string.  
   - **Pros:** Very simple and readable, easy to implement.  
   - **Cons:** Uses extra memory for string.  
   - **Time Complexity:** O(n)  
   - **Space Complexity:** O(n)  
   - **Edge Cases:** Negative numbers → false; Single-digit numbers → true; Numbers ending in 0 → handled by string comparison.

2. **Full Integer Reverse** ([PalindromeNumber_FullReverse.cpp](./PalindromeNumber_FullReverse.cpp))  
   - **Description:** Reverse the entire integer mathematically using `long long` to avoid overflow, compare with original.  
   - **Pros:** No string conversion, handles standard edge cases.  
   - **Cons:** Needs `long long` to avoid overflow; slightly more math involved.  
   - **Time Complexity:** O(log₁₀(n))  
   - **Space Complexity:** O(1)  
   - **Edge Cases:** Negative numbers → false; Overflow handled with `long long`.

3. **Half-Reverse Optimized** ([PalindromeNumber_HalfReverse.cpp](./PalindromeNumber_HalfReverse.cpp))  
   - **Description:** Reverse **only half of the digits**. Compare reversed half with remaining half. Avoids overflow.  
   - **Pros:** Memory-efficient, optimal solution in interviews, avoids overflow.  
   - **Cons:** Slightly trickier to understand at first.  
   - **Time Complexity:** O(log₁₀(n))  
   - **Space Complexity:** O(1)  
   - **Edge Cases:** Negative numbers → false; Numbers ending with 0 (except 0) → false; Single-digit numbers → true.

4. **First/Last Digit Comparison** ([PalindromeNumber_FirstLastDigit.cpp](./PalindromeNumber_FirstLastDigit.cpp))  
   - **Description:** Compare first and last digits directly. Remove first and last digits iteratively using `log10` and `pow`.  
   - **Pros:** Mathematical approach, no extra memory, elegant.  
   - **Cons:** Uses floating-point operations; slightly more math-heavy.  
   - **Time Complexity:** O(log₁₀(n))  
   - **Space Complexity:** O(1)  
   - **Edge Cases:** Negative numbers → false; Numbers ending with 0 (except 0) → false; Single-digit numbers → true.

---

## Notes

- All four approaches solve the same problem but show **different ways of thinking**:
  - String reversal → simple, readable, uses STL.  
  - Full integer reverse → manual math, handles overflow.  
  - Half-reverse → optimized, minimal memory, avoids overflow.  
  - First/last digit comparison → mathematical, directly compares digits, slightly advanced.  

- This README provides an **overview and comparison**, while each `.cpp` file contains **detailed comments**, implementation, and edge-case handling.  


