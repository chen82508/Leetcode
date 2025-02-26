impl Solution {
    pub fn length_of_longest_substring(s: String) -> i32 {
        let len = s.len();
        if len == 0 {
            return 0;
        }

        let mut map = vec![-1; 256];
        let (mut left, mut right, mut max_len) = (0, 0, 0);
        let s_chars: Vec<char> = s.chars().collect();

        while right < len {
            let c = s_chars[right] as usize;
            if map[c] != -1 {
                left = left.max(map[c] + 1);
            }

            map[c] = right as i32;
            max_len = max_len.max(right as i32 - left + 1);
            right += 1;
        }

        return max_len;
    }
}