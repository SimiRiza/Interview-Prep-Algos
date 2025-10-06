/*
 * Problem: Count how many primes are less than a given number n.
 * Approach: Brute Force
 * For each number from 2 to n-1, check if it is prime by testing all divisors.
 * Time Complexity: O(N * vN)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countPrimes(n) << "\n";
    return 0;
}
