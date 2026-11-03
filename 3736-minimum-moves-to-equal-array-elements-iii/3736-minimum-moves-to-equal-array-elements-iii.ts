function minMoves(nums: number[]): number {
    let sum = 0;
    for (const x of nums) sum += x;

    let maxi = Math.max(...nums);
    return nums.length * maxi - sum;
};