/*
 * Problem: Print all divisors of a given number n.
 * Approach: Optimized vN method
 * For every i from 1 to vn, if i divides n, print both i and n/i.
 * Time Complexity: O(vN)
 * Space Complexity: O(1)
 * Note: To print divisors in sorted order, store them first.
 */

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());
    for (int d : divisors) cout << d << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
