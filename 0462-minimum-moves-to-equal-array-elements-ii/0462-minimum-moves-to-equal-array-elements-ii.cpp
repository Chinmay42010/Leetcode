class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums), nums.end());
        int median = nums[nums.size() / 2];
        long long res = 0;
        
        for(int num : nums) {
            res += abs(num - median);
        }
        return res;
    }
};