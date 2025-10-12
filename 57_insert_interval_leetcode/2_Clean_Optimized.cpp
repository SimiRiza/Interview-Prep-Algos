#include <bits/stdc++.h>
using namespace std;

/*
Approach: Clean optimized version using three while loops
Logic: Step 1 - add all intervals before newInterval
       Step 2 - merge all overlapping intervals
       Step 3 - add remaining intervals
Time Complexity: O(n)
Space Complexity: O(n)
Edge Cases: Empty intervals, newInterval at start or end, complete overlap
*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0, n = intervals.size();
        vector<vector<int>> result;

        // Step 1: intervals before newInterval
        while (i < n && intervals[i][1] < newInterval[0]) {
            result.push_back(intervals[i++]);
        }

        // Step 2: merge overlapping
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        result.push_back(newInterval);

        // Step 3: add remaining intervals
        while (i < n) {
            result.push_back(intervals[i++]);
        }

        return result;
    }
};