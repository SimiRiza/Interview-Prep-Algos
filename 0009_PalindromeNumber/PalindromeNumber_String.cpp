/*
Problem: 0009 Palindrome Number
Description: Determine whether an integer is a palindrome.
Approach: String reversal
- Convert the number to a string.
- Reverse the string using std::reverse.
- Compare the reversed string with the original.
Time Complexity: O(n)
Space Complexity: O(n)
Edge Cases:
- Negative numbers
- Numbers ending with 0
- Single-digit numbers
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string num = to_string(x);
        string rev = num;
        reverse(rev.begin(), rev.end());
        return num == rev;
    }
};
