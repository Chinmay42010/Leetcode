/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    let maxGain = 0;
    let sum = 0;
    for(var i = 0; i < gain.length; i++){
        sum += gain[i];
        maxGain = Math.max(maxGain, sum);
    }
    return maxGain;
};