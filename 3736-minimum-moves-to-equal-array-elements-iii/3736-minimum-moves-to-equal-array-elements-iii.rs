impl Solution {
    pub fn min_moves(nums: Vec<i32>) -> i32 {
        let sum : i32 = nums.iter().sum();
        let maxi = *nums.iter().max().unwrap();

        return (nums.len() as i32 * maxi) - sum;
    }
}