class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < 10) {
                ans.insert(ans.begin(), nums[i]);
            } 
            else {
                while (nums[i] > 0) {
                    int rem = nums[i] % 10;
                    ans.insert(ans.begin(), rem);
                    nums[i] /= 10;
                }
            }
        }

        return ans;
    }
};