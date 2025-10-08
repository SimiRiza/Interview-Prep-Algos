# ValidPalindrome

This repository contains multiple **C++ implementations** to check whether a string is a **valid palindrome**, considering **only alphanumeric characters** and **ignoring cases**.  

It includes **two-pointer approaches** and a **filter & reverse approach**, demonstrating different implementation styles and trade-offs.

---

## 💻 Approaches

### [TwoPointer.cpp](./TwoPointer.cpp) – Two-pointer approaches
- **Way 1: Original**
  - Uses flags to handle alphanumeric checks
- **Way 2: Optimized**
  - Cleaner implementation with while-loops

**Pros:**
- O(n) time, O(1) space
- Efficient and suitable for large inputs
- Handles spaces, punctuation, and mixed case

**Cons:**
- Way 1 is slightly verbose due to flags

---

### [FilterReverse.cpp](./FilterReverse.cpp) – Filter & Reverse approach
- Filters string to lowercase alphanumeric characters, then compares it with its reverse.

**Pros:**
- Very readable and clean
- Simple to implement quickly

**Cons:**
- Uses O(n) extra space
- Slightly slower for very large strings

---

## ⚡ Complexity Table

| Approach | Time Complexity | Space Complexity | Notes |
|----------|----------------|----------------|-------|
| Two-pointer Way1 | O(n) | O(1) | Original, uses flags |
| Two-pointer Way2 | O(n) | O(1) | Optimized, cleaner |
| Filter & Reverse | O(n) | O(n) | Uses extra memory, readable |

---

## ✅ Edge Cases Handled
- Empty string → true  
- Single character → true  
- Strings with punctuation, spaces, mixed case → normalized for comparison  
- Only alphanumeric characters are considered


