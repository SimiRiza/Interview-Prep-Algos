#include <bits/stdc++.h>
using namespace std;

/*
Approach: In-place merge using intervals vector itself, erase full range at once
Logic: Scan intervals, merge overlapping with newInterval, erase merged range, insert newInterval
Time Complexity: O(n)
Space Complexity: O(1) (no extra vector, aside from small temp)
Edge Cases: Empty intervals, newInterval before/after all intervals, complete overlap
Notes: Slower version with erase inside loop commented below for reference
*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // If empty, just insert and return
        if (intervals.empty()) {
            intervals.push_back(newInterval);
            return intervals;
        }

        int i = 0;
        // Skip intervals before newInterval
        while (i < (int)intervals.size() && intervals[i][1] < newInterval[0]) i++;
        int start = i;

        // Merge overlapping intervals
        while (i < (int)intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }

        // Erase the merged range [start, i) and insert newInterval at position start
        intervals.erase(intervals.begin() + start, intervals.begin() + i);
        intervals.insert(intervals.begin() + start, newInterval);

        return intervals;

        /*
        // Slower variant (do not prefer): erase inside loop causes repeated shifts
        int j = start;
        while (j < (int)intervals.size() && newInterval[1] >= intervals[j][0]) {
            newInterval[0] = min(newInterval[0], intervals[j][0]);
            newInterval[1] = max(newInterval[1], intervals[j][1]);
            intervals.erase(intervals.begin() + j);
        }
        intervals.insert(intervals.begin() + j, newInterval);
        return intervals;
        */
    }
};