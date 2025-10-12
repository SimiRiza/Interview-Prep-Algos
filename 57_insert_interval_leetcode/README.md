# 0057_Insert_Interval

---
This folder contains multiple approaches to solve **LeetCode Problem 57 - Insert Interval**.


## Problem Statement
Given a set of non-overlapping intervals sorted by start time, insert a new interval into the intervals (merge if necessary).


## Approaches


### 1. Brute Force - Flag Based
- **File:** [1_BruteForce_FlagBased.cpp](1_BruteForce_FlagBased.cpp)
- **Logic:** Uses `check` and `mergedPushed` flags to track start and end merging step-by-step.
- **Time Complexity:** O(n)
- **Space Complexity:** O(n) extra vector
- **Pros:** Clear, easy to understand
- **Cons:** Slightly verbose, less clean than optimized approach


### 2. Clean Optimized Version
- **File:** [2_Clean_Optimized.cpp](2_Clean_Optimized.cpp)
- **Logic:** Three structured while loops: before merge, merging, after merge using an extra `result` vector.
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)
- **Pros:** Clean, readable, efficient for most use cases


### 3. In-Place Merge (O(1) extra space)
- **File:** [3_InPlace_Merge.cpp](3_InPlace_Merge.cpp)
- **Logic:** Reuses the original intervals vector; merges overlapping intervals; erases the entire merged range at once and inserts the new interval.
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)
- **Pros:** Space efficient
- **Notes:** A slower variant with `erase` inside a loop is commented for reference; causes performance drop due to repeated shifting.

---
## Edge Cases
- Empty intervals
- New interval completely before or after all intervals
- Complete overlap with multiple intervals
- Single interval input
