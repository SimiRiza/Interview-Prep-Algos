/**
 * File: TwoPointer.cpp
 * Description: Contains two C++ implementations of the two-pointer approach
 *              to check if a given string is a valid palindrome.
 * Approaches:
 *   Way 1: Original implementation using flags to handle alphanumeric checks
 *   Way 2: Optimized implementation using clean while-loop skipping
 * Time Complexity: O(n) for both
 * Space Complexity: O(1) for both
 * Edge Cases:
 *   - Empty string
 *   - Single character
 *   - Strings with spaces, punctuation, and mixed cases
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Way 1: Original implementation
    bool isPalindrome_Way1(string s) {
        int start = 0, end = s.length() - 1;
        while (start <= end) {
            char left, right;
            bool l=false, r=false;

            if (isalnum(s[start])) {
                left = tolower(s[start]);
                l = true;
            }
            if (isalnum(s[end])) {
                right = tolower(s[end]);
                r = true;
            }

            if (l && r) {
                if (left != right) return false;
                start++;
                end--;
            } else if (l && !r) end--;
            else if (!l && r) start++;
            else { start++; end--; }
        }
        return true;
    }

    // Way 2: Optimized implementation
    bool isPalindrome_Way2(string s) {
        int start = 0, end = s.length() - 1;
        while (start < end) {
            while (start < end && !isalnum(s[start])) start++;
            while (start < end && !isalnum(s[end])) end--;
            
            if (tolower(s[start]) != tolower(s[end])) 
                return false;

            start++;
            end--;
        }
        return true;
    }
};
