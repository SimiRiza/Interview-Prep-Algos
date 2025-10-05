50. Pow(x, n)
📘 Problem Description

Implement the function pow(x, n) that calculates x raised to the power n (x^n).

🧩 Approach 1: Iterative (Binary Exponentiation)
Explanation

This approach uses iterative binary exponentiation to compute power efficiently.

Handles the edge case where n == INT_MIN to prevent overflow.

Converts negative exponents by inverting x and making n positive.

Steps

If n == INT_MIN, increment n and mark the exception.

If n < 0, invert x (x = 1/x) and make n positive.

Repeatedly square x and multiply it to res when n is odd.

Adjust result for the exception case.

Complexity

Time Complexity: O(log n)

Space Complexity: O(1)

File

50_Pow_x_n_Iterative.cpp

🧩 Approach 2: Recursive (Divide and Conquer)
Explanation

Uses recursion and the principle:
x^n = (x^(n/2))^2 if n is even
x^n = (x^(n/2))^2 * x if n is odd

Safely handles large negative exponents by converting to long long.

Steps

If n < 0, invert x and make n positive.

Recursively compute power for half of n.

Multiply results based on whether n is odd or even.

Complexity

Time Complexity: O(log n)

Space Complexity: O(log n) (due to recursion stack)

File

50_Pow_x_n_Recursive.cpp

✅ Summary Comparison

| Aspect         | Iterative            | Recursive                                         |
| -------------- | -------------------- | ------------------------------------------------- |
| Readability    | Straightforward loop | Cleaner mathematical expression                   |
| Stack Usage    | Constant             | Logarithmic                                       |
| Implementation | Easier to debug      | More elegant but requires recursion understanding |
| Performance    | Slightly better      | Slight overhead from recursion                    |
