#include <numeric>
class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int gcdivi = nums[0];

        for (int num : nums) {
            gcdivi = gcd(gcdivi, num);

            if (gcdivi == 1)
                return true;
        }
        return false;
    }
};
