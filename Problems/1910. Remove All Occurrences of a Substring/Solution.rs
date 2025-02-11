impl Solution {
    pub fn remove_occurrences(s: String, part: String) -> String {
        let mut ans:Vec<char> = Vec::new();
        let part_chars:Vec<char> = part.chars().collect();
        let part_len = part_chars.len();

        for c in s.chars() {
            ans.push(c);

            if ans.len() >= part_len &&
                ans[ans.len() - part_len..] == part_chars[..] {
                ans.truncate(ans.len() - part_len);
            }
        }

        return ans.iter().collect();
    }
}