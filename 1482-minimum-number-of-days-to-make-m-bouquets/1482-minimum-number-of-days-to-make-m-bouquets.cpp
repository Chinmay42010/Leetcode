class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        int left = 1;
        int right = 1e9;
        
        if((long long)m*k > n) return -1;
        
        while(left <= right) {
            int mid = (left + right) / 2;
            int flower = 0, bouquet = 0;
            
            for (int i = 0; i < n; i++) {
                if(nums[i] > mid) {
                    flower = 0;
                } else if (++flower >= k) {
                    bouquet++;
                    flower = 0;
                }
            
            }
            if(bouquet < m){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};