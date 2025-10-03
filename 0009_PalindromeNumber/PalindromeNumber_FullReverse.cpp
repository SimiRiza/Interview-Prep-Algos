/*
Problem: 0009 Palindrome Number
Description: Determine whether an integer is a palindrome.
Approach: Full integer reverse
- Reverse the number mathematically using long long to avoid overflow.
- Compare the reversed number with the original.
Time Complexity: O(log10(n))
Space Complexity: O(1)
Edge Cases:
- Negative numbers
- Numbers ending with 0
- Single-digit numbers
*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int original = x;
        long long rev = 0;
        while (x != 0) {
            int d = x % 10;
            rev = rev * 10 + d;
            x /= 10;
        }
        return rev == original;
    }
};
