#include <bits/stdc++.h>
using namespace std;

/*
Approach: Brute Force using check and mergedPushed flags
Logic: Step-by-step manual merging of intervals; start and end tracked with flags
Time Complexity: O(n)
Space Complexity: O(n) (extra result vector)
Edge Cases: Empty intervals, newInterval before/after all intervals, complete overlap
*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int start = newInterval[0];
        int end = newInterval[1];
        int n = intervals.size();
        int i = 0;
        bool check = false;
        bool mergedPushed = false;

        vector<vector<int>> result;

        // Early return for empty input (optional)
        if (n == 0) {
            result.push_back({start, end});
            return result;
        }

        while (i < n) {
            int curStart = intervals[i][0];
            int curEnd = intervals[i][1];

            if (!check && curEnd < start) {
                result.push_back(intervals[i]);
                i++;
                continue;
            }

            if (!check) {
                if (curStart <= start && start <= curEnd) {
                    check = true;
                    start = curStart;
                } else if (start < curStart) {
                    check = true;
                }
            }

            if (check) {
                if (curStart <= end && end <= curEnd) {
                    end = curEnd;
                    result.push_back({start, end});
                    mergedPushed = true;
                    i++;
                    break;
                } else if (end > curEnd) {
                    i++;
                    continue;
                } else if (end < curStart) {
                    result.push_back({start, end});
                    mergedPushed = true;
                    break;
                }
            }
            i++;
        }

        if (check && !mergedPushed) result.push_back({start, end});
        while (i < n) result.push_back(intervals[i++]);
        if (!check) result.push_back({start, end});

        return result;
    }
};