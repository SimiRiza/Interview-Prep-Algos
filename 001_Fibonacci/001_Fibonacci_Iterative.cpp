/*
File: 001_Fibonacci_Iterative.cpp
Description: Iterative approach to compute Fibonacci numbers (O(n) time, O(1) space).
Author: Your Name
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << sol.fib(n) << endl;
    return 0;
}
