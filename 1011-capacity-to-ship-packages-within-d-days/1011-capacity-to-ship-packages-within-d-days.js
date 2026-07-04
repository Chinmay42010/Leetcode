/**
 * @param {number[]} weights
 * @param {number} days
 * @return {number}
 */
var shipWithinDays = function(nums, days) {
    let n = nums.length;
    let low = Math.max(...nums);
    let high = 0;

    for(var i = 0; i < n; i++) {
        high += nums[i];
    }
    
    while(low <= high) {
        let daysNeeded = 1, load = 0
        let mid = Math.floor((low + high) / 2);
    
        for(let j = 0; j < n; j++) {
            if(load + nums[j] > mid) {
                daysNeeded++;
                load = 0
            }
            load = load + nums[j];
        }
    
        if(daysNeeded > days) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return low;
};