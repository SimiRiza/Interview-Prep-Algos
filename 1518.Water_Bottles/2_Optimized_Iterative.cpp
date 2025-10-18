/*
LeetCode Problem: 1518. Water Bottles

Approach 2: Optimized Iterative Solution
This approach uses division and modulus to compute exchanged bottles efficiently
without simulating each bottle individually.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;

        while (numBottles >= numExchange) {
            int sets = numBottles / numExchange;
            res += sets;
            // Note: We could store this in a variable `remainingBottles = (numBottles % numExchange) + sets`
            // for clarity, but it's eliminated here for simplicity.
            numBottles = (numBottles % numExchange) + sets;
        }
        return res;
    }
};

int main() {
    Solution obj;
    cout << obj.numWaterBottles(15, 4);
    return 0;
}

