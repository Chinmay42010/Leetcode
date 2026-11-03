class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = 0;
        for(auto x : nums) sum += x;

        int mx = *max_element(nums.begin(), nums.end());
        return nums.size() * mx - sum;
    }
};