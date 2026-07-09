/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isGoodArray = function(nums) {
    let n = nums.length;
    let gcdivi = nums[0];

    if(gcdivi == 1) return true;

    for(let i = 1; i < n; i++) {
        gcdivi = gcd(nums[i], gcdivi);

        if(gcdivi == 1) return true;
    }
    return false;
};

function gcd(a, b) {
    while (b !== 0) {
        [a, b] = [b, a % b];
    }
    return Math.abs(a);
}