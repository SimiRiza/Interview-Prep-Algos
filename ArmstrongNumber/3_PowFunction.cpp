/*
💡 Approach: Use standard pow() function
⏱ Time Complexity: O(d log d) (log d per pow call)
📦 Space Complexity: O(1)
⚠️ Notes: Uses floating-point arithmetic → small rounding errors possible.
For complete problem description, see 1_IntegerPrecompute.cpp or README.md
*/

#include <cmath>

bool isArmstrong(int num) {
    int orig = num;
    long long res = 0;
    int d = (num == 0) ? 1 : (int)log10(num) + 1;

    while(num != 0) {
        res += pow((num % 10), d);
        num /= 10;
    }
    return res == orig;
}

