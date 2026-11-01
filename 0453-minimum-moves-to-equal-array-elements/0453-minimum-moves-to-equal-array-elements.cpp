class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res = 0;
        int low = ranges::min(nums);

        for(int x : nums) res += x - low;

        return res;
    }
};