/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves = function(nums) {
    let sum  = 0;
    for(const x of nums) sum += x;

    let maxi = Math.max(...nums);
    return nums.length * maxi - sum;
};