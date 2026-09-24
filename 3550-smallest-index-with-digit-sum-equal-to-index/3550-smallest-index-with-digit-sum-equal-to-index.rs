impl Solution {
    pub fn smallest_index(nums: Vec<i32>) -> i32 {
        for i in 0..nums.len() {
            let mut x = nums[i];
            let mut sum = 0;

            while x > 0 {
                sum += x % 10;
                x /= 10;
            }

            if sum == i as i32 {
                return i as i32;
            }
        }

        -1
    }
}