/*
 * Problem: Print all divisors of a given number n.
 * Approach: Naive
 * Loop from 1 to n and print every i that divides n exactly.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
