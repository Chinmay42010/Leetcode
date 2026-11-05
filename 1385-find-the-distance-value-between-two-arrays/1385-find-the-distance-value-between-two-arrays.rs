impl Solution {
    pub fn find_the_distance_value(
        mut arr1: Vec<i32>,
        mut arr2: Vec<i32>,
        d: i32,
    ) -> i32 {
        arr1.sort();
        arr2.sort();

        let mut ans = 0;
        let mut j = 0;

        for &x in arr1.iter() {
            while j < arr2.len() && arr2[j] < x - d {
                j += 1;
            }

            if j == arr2.len() || arr2[j] > x + d {
                ans += 1;
            }
        }

        ans
    }
}