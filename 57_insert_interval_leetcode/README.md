# LeetCode 57 — Insert Interval

Repository: insert-interval-leetcode-57 

Problem summary
- Given a set of non-overlapping intervals sorted by start time, insert a new interval and merge if necessary.
- LeetCode #57

Folder structure
- insert-interval-leetcode-57/
  - brute_force.cpp            # Brute-force approach using flags and a result vector (your "check" approach)
  - merge_with_result.cpp      # Clean 3-phase approach: add before, merge overlapping, add after (recommended)
  - erase_range_inplace.cpp    # In-place: find overlap range, erase range at once, insert merged interval (O(1) extra)
  - README.md                  # This file (documents all 4 approaches, complexity, recommendations)

Notes about the 4 approaches discussed
- Approach A — Brute-force (brute_force.cpp)
  -  "check" and "flag" approach: iterate once, decide when to push earlier intervals, find merge region,
    push merged interval, then remaining intervals.
  - Time: O(n), Space: O(n) extra for result vector.
  - Pros: easy to reason about, linear time, handles edge cases well.
  - Cons: uses an extra vector for output (but that's idiomatic and simple).

- Approach B — Clean merge with result (merge_with_result.cpp) — Recommended
  - Classic three-phase approach:
    1) Add intervals before newInterval.
    2) Merge overlapping intervals into newInterval.
    3) Add remaining intervals.
  - Time: O(n), Space: O(n) extra for result vector.
  - Pros: crisp, readable, robust, idiomatic for this problem.
  - Cons: allocates a new vector for result (which is normal).

- Approach C — In-place erase range (erase_range_inplace.cpp)
  - Find first overlapping index `start`, find last overlapping index `end`, erase the contiguous range
    of overlapping intervals in a single erase call, then insert the merged interval at `start`.
  - Time: O(n) (each erase-range and insert is O(n) but done at most once), Space: O(1) extra (in-place).
  - Pros: avoids allocating a separate result vector; efficient if you prefer in-place modification.
  - Cons: slightly more tricky to write but still linear time overall.

- Approach D — Erase inside loop (anti-pattern)
  - Repeatedly calling `intervals.erase(intervals.begin() + i)` inside a loop while incrementing or not
    will move elements multiple times. In the worst case (merging many small intervals) this becomes O(n^2).
  - Recommendation: don't use this approach for large inputs. If you want in-place deletion, batch the
    deletions (erase a contiguous range) instead.

Complexity comparison (n = number of input intervals)
- Brute-force (result vector): Time O(n), Space O(n)
- Merge with result (recommended): Time O(n), Space O(n)
- In-place erase range: Time O(n), Space O(1) extra
- Erase-in-loop (bad): Time O(n^2) worst-case, Space O(1)

When to choose which
- For readability and safety, use merge_with_result.cpp (Approach B).
- If you must avoid extra memory and want in-place editing, use erase_range_inplace.cpp (Approach C).
- Keep brute_force.cpp (Approach A) only for demonstration / learning if you want to show the flag-based solution.
- Do not use erase-in-loop in production code — mention it as a cautionary example (I include it in this README).

How to compile and test locally
- Example using g++ (C++17):
  - g++ -std=c++17 -O2 brute_force.cpp -o brute_force
  - g++ -std=c++17 -O2 merge_with_result.cpp -o merge_with_result
  - g++ -std=c++17 -O2 erase_range_inplace.cpp -o erase_range_inplace
- These files contain a `Solution` class suitable for LeetCode; to run locally, add a small `main()` driver.
