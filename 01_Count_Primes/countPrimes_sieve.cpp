/*
 * Problem: Count how many primes are less than a given number n.
 * Approach: Sieve of Eratosthenes
 * Create a boolean array to mark non-primes. Very efficient.
 * Time Complexity: O(N log log N)
 * Space Complexity: O(N)
 */

#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    if (n <= 2) return 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return count(isPrime.begin(), isPrime.end(), true);
}

int main() {
    int n;
    cin >> n;
    cout << countPrimes(n) << "\n";
    return 0;
}
