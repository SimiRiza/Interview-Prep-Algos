# 1518. Water Bottles

**Difficulty:** Easy  
**Link:** [LeetCode Problem](https://leetcode.com/problems/water-bottles/)

---

## 🧩 Problem Statement
You have `numBottles` full water bottles. You can drink one bottle at a time.  
When you drink a bottle, it becomes empty.  
If you have `numExchange` empty bottles, you can exchange them for one full bottle.  

Return the **total number of bottles you can drink**.

---

## 💡 Approaches

| # | Approach | File | Time Complexity | Space Complexity | Notes |
|---|-----------|------|-----------------|------------------|-------|
| 1 | **Brute Force Simulation** | [1_Brute_Force.cpp](./1_Brute_Force.cpp) | O(n) | O(1) | Step-by-step simulation of every drink and exchange. |
| 2 | **Optimized Iterative** | [2_Optimized_Iterative.cpp](./2_Optimized_Iterative.cpp) | O(log n) | O(1) | Efficient iterative solution using division/modulus. |
| 3 | **Recursive** | [3_Recursion.cpp](./3_Recursion.cpp) | O(log n) | O(log n) | Recursive logic with helper function and one-liner variant. |
| 4 | **Mathematical Formula (O(1))** | [4_Mathematical.cpp](./4_Mathematical.cpp) | O(1) | O(1) | Uses a direct mathematical relationship between bottles and exchanges. |

---

## ⚖️ Comparison and Insights
- **Brute Force** helps build intuition about how bottles exchange.
- **Iterative** simplifies the logic and drastically improves runtime.
- **Recursive** mirrors the mathematical process elegantly and compactly.
- **Mathematical (O(1))** is the cleanest and fastest once the pattern is known.

---

## 🧠 Edge Cases
- `numExchange > numBottles` → no exchange possible, answer = `numBottles`.
- `numExchange = 2` → maximum possible bottles since each empty gives a new one.
- Very large `numBottles` values handled safely in all solutions.

---

