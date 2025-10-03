/*
Problem: 0009 Palindrome Number
Description: Determine whether an integer is a palindrome.
Approach: Half-reverse optimized
- Reverse only half the digits.
- Compare the reversed half with the remaining half.
- Avoids overflow and extra memory.
Time Complexity: O(log10(n))
Space Complexity: O(1)
Edge Cases:
- Negative numbers
- Numbers ending with 0 (except 0)
- Single-digit numbers
*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return (x == rev) || (x == rev / 10);
    }
};
