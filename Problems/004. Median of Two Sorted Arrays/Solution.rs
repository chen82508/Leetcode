use std::cmp;

impl Solution {
    pub fn find_median_sorted_arrays(nums1: Vec<i32>, nums2: Vec<i32>) -> f64 {
        let m:usize = nums1.len();
        let n:usize = nums2.len();

        if m > n {
            return Solution::find_median_sorted_arrays(nums2, nums1);
        }

        let total_left = (m + n + 1) / 2;
        let (mut left, mut right):(usize, usize) = (0, m);

        while left <= right {
            let i = ((left + right) / 2) as usize;
            let j = total_left - i;

            let nums1_left_max:i32 = if i == 0 { std::i32::MIN } else { nums1[i - 1] };
            let nums1_right_min:i32 = if i == m { std::i32::MAX } else { nums1[i] };
            let nums2_left_max:i32 = if j == 0 { std::i32::MIN } else { nums2[j - 1] };
            let nums2_right_min:i32 = if j == n { std::i32::MAX } else { nums2[j] };

            if nums1_left_max <= nums2_right_min && nums2_left_max <= nums1_right_min {
                if (m + n) % 2 == 1 {
                    return cmp::max(nums1_left_max, nums2_left_max) as f64;
                }
                return ((cmp::max(nums1_left_max, nums2_left_max) + cmp::min(nums1_right_min, nums2_right_min))) as f64 / 2.0;
            }
            else if nums1_left_max > nums2_right_min {
                right = i - 1;
            }
            else {
                left = i + 1;
            }
        }
        return 0.0;
    }
}