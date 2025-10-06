/*
 * Problem: Print all prime factors of a given number n.
 * Approach: Divide n by every possible prime factor up to vn.
 * Time Complexity: O(vN)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

void printPrimeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    // If n becomes a prime number greater than 2
    if (n > 2)
        cout << n;
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    printPrimeFactors(n);
    return 0;
}
