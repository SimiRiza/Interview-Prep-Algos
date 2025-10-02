# Reverse Integer - Optimized Solution

## Problem:
Reverse a 32-bit signed integer while handling overflow.

### Approach:
1. **Initial idea (learning step)**:
   - Tried storing digits in an array first.
   - Realized that extra storage is unnecessary.
   - Can reverse digits directly using: `res = res * 10 + digit`.

2. **Optimized final solution (current approach)**:
   - Uses **no extra space** (O(1) space complexity).
   - Handles **negative numbers** automatically.
   - Performs **overflow check per digit** to stay safe within 32-bit integer limits.
   - **Pre-computes** INT_MAX/10 and INT_MIN/10 to reduce repeated calculations inside the loop.
   - Combines multiple overflow conditions into a **single if statement** to reduce CPU branch overhead.

### Micro-Optimizations Observed:
- Combining overflow checks into one `if` statement increased runtime percentile from **5% → 100%**.
- Precomputing INT_MAX/10 and INT_MIN/10 improved memory percentile from **20% → 80%**.
- These changes are tiny, but **in real-world systems, reducing repeated operations and branches can improve performance**.

### Key Takeaways:
- Direct digit manipulation is sufficient; extra arrays are unnecessary.
- Small constant-factor optimizations can significantly affect runtime in tight benchmarks.
- Focus on **correctness and clean overflow handling first**; micro-optimizations can be added later.
