class Solution {
public:
    int climbStairs(int n) {
        if (n < 3)
            return n;
        int step1 = 2;
        int step2 = 1;
        int allways = 0;
        for (int i = 2; i < n; i++) {
            allways = step1 + step2;
            step2 = step1;
            step1 = allways;
        }
        return allways;
    }
};