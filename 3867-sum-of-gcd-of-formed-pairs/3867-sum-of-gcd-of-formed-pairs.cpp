class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maximum = 0;
        for(int i = 0; i < n; i++){
            maximum = max(maximum, nums[i]);
            nums[i] = gcd(maximum, nums[i]);
        }
        long long sum = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n/2; i++){
            sum += gcd(nums[i], nums[n - 1 - i]);
        }
        return sum;
    }
};