/**
 * @param {number[]} nums
 * @return {number}
 */
var findClosestNumber = function(nums) {
    let ans = nums[0];

    for (let i = 1; i < nums.length; i++) {
        if (Math.abs(nums[i]) < Math.abs(ans)) {
            ans = nums[i];
        } else if (Math.abs(nums[i]) === Math.abs(ans) && nums[i] > ans) {
            ans = nums[i];
        }
    }

    return ans;
};