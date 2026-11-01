function minMoves(nums: number[]): number {
    const low = Math.min(...nums);
    let res = 0;

    for(let i = 0; i < nums.length; i++) {
        res += nums[i] - low;
    }

    return res;
};