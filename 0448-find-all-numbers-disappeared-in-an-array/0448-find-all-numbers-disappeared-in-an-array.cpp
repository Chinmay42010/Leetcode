class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        //Using index to mark as seen
        for (int num : nums) {
            int idx = abs(num) - 1;

            if (nums[idx] > 0)
                nums[idx] *= -1;
        }

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;


        //Using Frequency map
        // int n = nums.size();
        // vector<int> freq(n + 1, 0);
        
        // for (int num : nums)
        //     freq[num]++;

        // vector<int> ans;

        // for (int i = 1; i <= n; i++) {
        //     if (freq[i] == 0)
        //         ans.push_back(i);
        // }

        // return ans;
    }
};