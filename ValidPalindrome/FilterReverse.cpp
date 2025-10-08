/**
 * File: FilterReverse.cpp
 * Description: C++ implementation of the filter + reverse approach
 *              to check if a string is a valid palindrome.
 * Approach:
 *   - Filter string to include only lowercase alphanumeric characters
 *   - Compare filtered string with its reverse
 * Time Complexity: O(n)
 * Space Complexity: O(n) due to filtered string
 * Edge Cases:
 *   - Empty string
 *   - Single character
 *   - Strings with punctuation, spaces, mixed cases
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome_FilterReverse(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c))
                filtered += tolower(c);
        }
        string reversed = filtered;
        reverse(reversed.begin(), reversed.end());
        return filtered == reversed;
    }
};
