/**
 * @param {number} c
 * @return {boolean}
 */
var judgeSquareSum = function(c) {
    let low = 0;
    let high = Math.sqrt(c);
    high = Math.floor(high);
    while(low <= high) { 
        let sum = (low * low) + (high * high);
        if(sum === c) return true;
        else if(sum < c) low++;
        else high--;
    }
    return false;
};