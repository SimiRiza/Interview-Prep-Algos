/*
Problem: Find Greatest Common Divisor of Array
LeetCode: 1979
Description:
Given an integer array, find the GCD of the smallest and largest number in the array.

Approach:
1. Find the minimum and maximum values in the array.
2. Compute the GCD of these two numbers using Euclidean Algorithm.
   - Recursive version: simple and elegant.
   - Iterative version: uses constant stack space.
Time Complexity: O(n + log(max_val)) 
  - n: for min/max element search
  - log(max_val): for GCD computation
Space Complexity: O(1) for iterative GCD, O(log(min(a,b))) for recursive GCD stack
*/

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Recursive GCD using Euclidean algorithm
    int gcdRecursive(int a, int b) {
        return b == 0 ? a : gcdRecursive(b, a % b);
    }

    // Iterative GCD to avoid recursion stack
    int gcdIterative(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(), nums.end());
        int minNum = *min_element(nums.begin(), nums.end());

        // You can use either recursive or iterative version
        // return gcdRecursive(maxNum, minNum);
        return gcdIterative(maxNum, minNum);
    }
};
