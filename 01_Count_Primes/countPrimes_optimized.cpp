/*
 * Problem: Count how many primes are less than a given number n.
 * Approach: Slightly Optimized Brute Force
 * For each number from 2 to n-1, check divisibility only up to vnum and skip even numbers after 2.
 * Time Complexity: O(N * vN) but faster than the naive approach.
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

bool isPrimeOptimized(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrimeOptimized(i)) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countPrimes(n) << "\n";
    return 0;
}
