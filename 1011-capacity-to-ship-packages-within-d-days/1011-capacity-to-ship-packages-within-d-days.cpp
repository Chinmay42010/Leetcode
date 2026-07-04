class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        
        while(low <= high) {
            int mid = (low + (high - low) / 2);
            int load = 0, daysNeeded = 1;
            for(int i = 0; i < n; i++) {
                if(load + nums[i] > mid) {
                    daysNeeded++;
                    load = 0;
                } 
                load += nums[i];
            }
            if(daysNeeded <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};