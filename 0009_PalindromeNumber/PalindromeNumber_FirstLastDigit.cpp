/*
Problem: 0009 Palindrome Number
Description: Determine whether an integer is a palindrome.
Approach: First/Last Digit Comparison
- Compare first and last digits directly.
- Remove first and last digits iteratively.
- Uses pow and log10 to calculate digit place values.
Time Complexity: O(log10(n))
Space Complexity: O(1)
Edge Cases:
- Negative numbers
- Numbers ending with 0 (except 0)
- Single-digit numbers
*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) { 
        if(x < 0) return false;
        if(x == 0) return true;
        int fac = (int)pow(10, (int)log10(x));
        while(x != 0) {
            int ld = x % 10;
            int fd = x / fac;
            if(ld != fd) return false;
            x = (x % fac) / 10;
            fac /= 100;
        }
        return true;
    }
};
