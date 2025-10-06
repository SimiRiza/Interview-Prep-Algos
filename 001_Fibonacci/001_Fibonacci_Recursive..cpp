/*
File: 001_Fibonacci_Recursive.cpp
Description: Brute-force recursive approach to compute Fibonacci numbers.
Author: Your Name
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n; // Base case: F(0)=0, F(1)=1
        return fib(n - 1) + fib(n - 2); // Recursive call
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
