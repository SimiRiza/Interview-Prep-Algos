/*
📝 Problem: Armstrong Number
💡 Approach: Precompute powers of digits 0–9 using integer multiplication (safe, no floating-point)
⏱ Time Complexity: O(d)  (d = number of digits)
📦 Space Complexity: O(1)
⚠️ Notes: Pure integer arithmetic, avoids any floating-point rounding errors.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    if (num < 0) return false;
    int orig = num;

    int d = (num == 0) ? 1 : (int)log10(num) + 1;

    long long powTable[10];
    for (int i = 0; i <= 9; i++) {
        long long val = 1;
        for (int j = 0; j < d; j++) val *= i;
        powTable[i] = val;
    }

    long long sum = 0;
    int temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += powTable[digit];
        temp /= 10;
    }

    return sum == orig;
}

int main() {
    int test = 9474;
    cout << test << " is Armstrong? " << (isArmstrong(test) ? "Yes" : "No") << endl;
    return 0;
}
