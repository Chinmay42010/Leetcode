class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[nums.size() - 1] = nums[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--) {
            ans[i] = max(ans[i + 1], nums[i]);
        }
        int maxi = 0;
        int j = 0;
        int i = 0;

        while (j < nums.size()) {
            if (nums[i] <= ans[j]) {
                maxi = max(maxi, j - i);
                j++;
            } else {
                i++;
            }
        }
        return maxi;
    }
};