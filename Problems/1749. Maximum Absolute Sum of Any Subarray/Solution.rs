impl Solution {
    pub fn max_absolute_sum(nums: Vec<i32>) -> i32 {
        let len = nums.len();
        if len == 1 {
            return i32::abs(nums[0]);
        }

        let (mut curr_max, mut curr_min) = (nums[0], nums[0]);
        let (mut max_sum, mut min_sum) = (nums[0], nums[0]);

        for i in 1..len {
            curr_max = nums[i].max(curr_max + nums[i]);
            max_sum = max_sum.max(curr_max);

            curr_min = nums[i].min(curr_min + nums[i]);
            min_sum = min_sum.min(curr_min);
        }

        return i32::abs(max_sum).max(i32::abs(min_sum));
    }
}