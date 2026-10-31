/**
 * @param {number[][]} grid
 * @return {number}
 */
var uniquePaths = function(grid) {
    const mod = 1_000_000_007;
    const down = new Array(grid[0].length).fill(0);
    
    down[0] = 1;

    for(const row of grid) {
        let right = 0;
        for(const [j, mirror] of row.entries()) {
            if(mirror) {
                [right, down[j]] = [down[j], right];
            } else {
                right = down[j] = (right + down[j]) % mod;
            }
        }
    }
    return down[down.length - 1];
};