impl Solution {
    pub fn longest_palindrome(s: String) -> String {
        let len = s.len();
        if len == 1 {
            return s;
        }

        let expand = |s: &[u8], mut l: i32, mut r: i32, max_len: &mut usize, start: &mut usize| {
            while l >= 0 && r < s.len() as i32 && s[l as usize] == s[r as usize] {
                if r - l + 1 > *max_len as i32 {
                    *max_len = (r - l + 1) as usize;
                    *start = l as usize;
                }
                l -= 1; r += 1;
            }
        };

        let s_chars = s.as_bytes();
        let (mut max_len, mut start): (usize, usize) = (0, 0);
        for i in 0..len {
            expand(s_chars, i as i32, i as i32, &mut max_len, &mut start);
            expand(s_chars, i as i32, i as i32 + 1, &mut max_len, &mut start);
        }

        return s_chars[start..start + max_len].iter().map(|&c| c as char).collect();
    }
}