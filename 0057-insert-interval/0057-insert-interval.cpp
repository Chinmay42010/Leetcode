class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newNums) {
        int n = nums.size(), i = 0;
        vector<vector<int>> res;

        // Compare ending of nums to start of newNums
        while (i < n && nums[i][1] < newNums[0]) {
            res.push_back(nums[i]);
            i++;
        }

        // Overlapping and merging of nums
        while (i < n && newNums[1] >= nums[i][0]) {
            newNums[0] = min(newNums[0], nums[i][0]);
            newNums[1] = max(newNums[1], nums[i][1]);
            i++;
        }
        res.push_back(newNums);

        // No overlapping of intervals after merging
        while (i < n) {
            res.push_back(nums[i]);
            i++;
        }
        return res;
    }
};