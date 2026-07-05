class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int low = 0, high = nums.size();

        while (low < high) {

            int mid = (low + high) / 2;

            if (nums[mid] - 1 - mid < k){
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low + k;
    }
};