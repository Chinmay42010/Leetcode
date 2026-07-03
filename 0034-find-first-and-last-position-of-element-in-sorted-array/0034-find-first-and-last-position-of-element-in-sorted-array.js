/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    
    let floor = -1;
    let ceil = -1;
    let low = 0;
    let high = nums.length - 1;
    
    while(low <= high){
        let mid = Math.floor(low + (high - low) / 2);
        if(nums[mid] <= target) {
            if(nums[mid] === target)
            floor = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    let low1 = 0;
    let high1 = nums.length - 1;
    
    while(low1 <= high1){
        let mid = Math.floor(low1 + (high1 - low1) / 2);
        if(nums[mid] >= target) {
            if(nums[mid] === target)
            ceil = mid;
            high1 = mid - 1;
        } else {
            low1 = mid + 1;
        }
    }
    return [ceil, floor];
};