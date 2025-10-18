/*
LeetCode Problem: 1518. Water Bottles

Problem Statement:
You have `numBottles` full water bottles. You can drink one bottle at a time.
When you drink a bottle, it becomes empty.
If you have `numExchange` empty bottles, you can exchange them for one full bottle.

Return the total number of bottles you can drink.

Example:
Input: numBottles = 9, numExchange = 3
Output: 13
*/

#include <iostream>
using namespace std;

// ---------------------- Approach 1: Brute Force Simulation ----------------------
// Time Complexity: O(n)
// Space Complexity: O(1)
// This approach simulates drinking one bottle at a time and manually handles exchanges.

int numWaterBottles(int numBottles, int numExchange)
{
    int consumed = 0; // Number of bottles currently consumed since last exchange
    int total = 0;    // Total bottles consumed overall

    while (numBottles > 0)
    {
        consumed += 1;
        numBottles -= 1;

        // If we can exchange the empties for a new full bottle
        if (consumed == numExchange)
        {
            total += consumed;
            consumed = 0;
            numBottles += 1;
        }
    }
    return total + consumed;
}

int main()
{
    int numBottles = 15, numExchange = 4;
    cout << numWaterBottles(numBottles, numExchange);
    return 0;
}
