/*
LeetCode Problem: 1518. Water Bottles

Approach 4: Mathematical (O(1)) Solution
Using mathematical observation, we can derive a direct formula:
    total = numBottles + (numBottles - 1) / (numExchange - 1)
This works because each exchange effectively reduces one empty bottle,
and we can predict total exchanges before running out.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        return numBottles + (numBottles - 1) / (numExchange - 1);
    }
};

int main()
{
    Solution obj;
    cout << obj.numWaterBottles(15, 4);
    return 0;
}
