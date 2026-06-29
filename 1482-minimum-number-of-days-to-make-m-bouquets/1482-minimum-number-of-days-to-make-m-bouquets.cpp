class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;

        while(low <= high){
            int mid = low + (high-low)/2;
            int flower = 0, bouquet = 0;
            for(int i = 0;i < n; i++){
                if(nums[i] <= mid){
                    flower++;
                    if(flower == k){
                        bouquet++;
                        flower = 0;
                    }
                }
                else flower = 0;
            }

            if(bouquet >= m){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;

    }
};