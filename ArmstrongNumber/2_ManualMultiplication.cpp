/*
💡 Approach: Calculate powers manually inside loops (integer only, safe)
⏱ Time Complexity: O(d²)  (outer loop for digits, inner loop for powers)
📦 Space Complexity: O(1)
⚠️ Notes: Safe integer arithmetic, no floating-point. Slightly slower than precompute method.
*/

class Solution {
public:
    bool isArmstrong(int num) {
        int temp = num, d = 0;

        while(temp) {
            temp /= 10;
            d++;
        }

        temp = num;
        long long res = 0;

        while(temp) {
            long long powVal = 1;
            int digit = temp % 10;
            for(int i = 0; i < d; i++) powVal *= digit;
            res += powVal;
            temp /= 10;
        }

        return num == res;
    }
};
