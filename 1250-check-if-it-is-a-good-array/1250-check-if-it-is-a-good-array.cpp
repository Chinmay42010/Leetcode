class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n = nums.size();
        int gcdivi = nums[0];

        if(gcdivi == 1)return true;

        for (int i = 1; i < n; i++) {
            gcdivi = gcd(nums[i], gcdivi);

            if (gcdivi == 1)
                return true;
        }
        return false;
    }
};