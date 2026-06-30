/**
 * @param {string} text
 * @return {number}
 */
var maxNumberOfBalloons = function(text) {
    const freq = {};

    for (const c of text) {
        if (c === 'b' || c === 'a' || c === 'l' || c === 'o' || c === 'n') {
            freq[c] = (freq[c] || 0) + 1;
        }
    }

    const b = freq['b'] || 0;
    const a = freq['a'] || 0;
    const l = Math.floor((freq['l'] || 0) / 2);
    const o = Math.floor((freq['o'] || 0) / 2);
    const n = freq['n'] || 0;

    return Math.min(b, a, l, o, n);
};