/*
LeetCode Problem: 1518. Water Bottles

Approach 3: Recursive Solutions
Two recursive versions are shown:
1. Standard recursion with a helper function.
2. One-liner recursive version (commented) for compactness.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    // ---------------------- Full Recursive Version ----------------------
    int helper(int numBottles, int numExchange) {
        // Base case: not enough bottles to exchange
        if (numBottles < numExchange) return 0;

        int sets = numBottles / numExchange;
        int remainingBottles = numBottles % numExchange;

        return sets + helper(sets + remainingBottles, numExchange);
    }

    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles + helper(numBottles, numExchange);
    }

    // ---------------------- One-Liner Recursive Version (Alternative) ----------------------
    /*
    int numWaterBottles(int full, int exchange) {
        return full < exchange ? full : full + numWaterBottles(full / exchange + full % exchange, exchange);
    }
    */
};

int main() {
    Solution obj;
    cout << obj.numWaterBottles(15, 4);
    return 0;
}

