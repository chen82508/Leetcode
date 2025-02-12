impl Solution {
    pub fn maximum_sum(nums: Vec<i32>) -> i32 {
        let mut same_digit: Vec<i32> = vec![-1; 82];
        let mut max_sum: i32 = -1;

        for num in &nums {
            let (mut val, mut sum): (i32, usize) = (*num, 0);
            while val > 0 {
                sum += (val % 10) as usize;
                val /= 10;
            }
            
            let tmp_max = same_digit[sum];
            if tmp_max > 0 {
                max_sum = max_sum.max(*num + tmp_max);
            }
            same_digit[sum] = tmp_max.max(*num);
        }

        return max_sum;
    }
}