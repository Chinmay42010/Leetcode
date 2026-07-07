/**
 * @param {number} n
 * @return {number}
 */
var sumAndMultiply = function(n) {
    let x = 0, sum = 0, len = 1;
    while(n != 0) {
        x = (Math.floor(n % 10)) * len + x;
        if(Math.floor(n % 10 != 0)) len = len * 10;
        sum += (n % 10);
        n = Math.floor(n / 10);
    }
    return sum * x;
};