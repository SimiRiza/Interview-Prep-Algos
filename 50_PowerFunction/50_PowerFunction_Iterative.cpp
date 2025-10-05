/*
Problem Number: 50
Problem Name: Power Function (myPow)
Description: Compute x raised to the power n (x^n) efficiently.
Approach: Iterative Exponentiation by Squaring
Time Complexity: O(log n)
Space Complexity: O(1)
*/


class Solution {
public:
double myPow(double x, int n) {
long double res = 1;
double x1 = x; // store original x to handle INT_MIN case
bool exception = 0;


// Handle edge case for INT_MIN
if(n == INT_MIN){
exception = 1;
n = n + 1;
}


// Handle negative exponents
if(n < 0){
n = -n;
x = 1 / x;
}


// Exponentiation by squaring loop
while(n > 0){
if(n % 2 != 0) res *= x; // multiply result when n is odd
x *= x; // square the base
n /= 2; // halve the exponent
}


// Adjust result for INT_MIN edge case
// if(exception) return res * (1 / x1);


return res;
}
};