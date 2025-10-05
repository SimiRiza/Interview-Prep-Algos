/*
Problem Number: 50
Problem Name: Power Function (myPow)
Description: Compute x raised to the power n (x^n) using recursion.
Approach: Recursive Exponentiation by Squaring
Time Complexity: O(log n)
Space Complexity: O(log n) due to recursion stack
*/

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;       // safe copy to handle INT_MIN

        // Handle negative exponents
        if(N < 0){
            x = 1 / x;
            N = -N;
        }

        // Base case
        if(N == 0) return 1;

        // Recursive call on half the exponent
        double half = myPow(x, N / 2);

        // Combine results
        if(N % 2 == 0) return half * half;
        else return half * half * x;  // multiply extra x if exponent is odd
    }
};