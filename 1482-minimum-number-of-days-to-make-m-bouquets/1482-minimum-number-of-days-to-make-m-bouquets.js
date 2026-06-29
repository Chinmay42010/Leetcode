/**
 * @param {number[]} nums
 * @param {number} m
 * @param {number} k
 * @return {number}
 */
var minDays = function(nums, m, k) {
    let n = nums.length;

    let low = 1;
    let high = Math.max(...nums);
    let ans = -1;
    
    while(low <= high){
        let mid = Math.floor(low + (high - low) / 2);
        let flower = 0;
        let bouquet = 0;
        for(var i = 0; i < n; i++){
            if(nums[i] <= mid){
                flower++;
                if(flower == k){
                    bouquet++;
                    flower = 0;
                }
            }
            else flower = 0;
        }
        if(bouquet >= m) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid +1
        }
    }
    return ans;
};