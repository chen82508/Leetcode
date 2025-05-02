impl Solution {
    pub fn convert(s: String, num_rows: i32) -> String {
        let n = s.len() as i32;
        if num_rows == 1 || num_rows >= n {
            return s;
        }

        let mut result = String::new();
        for i in 0..num_rows {
            let mut j = i;
            while j < n {
                result.push(s.as_bytes()[j as usize] as char);
                if i != 0 && i != num_rows - 1 {
                    let k = j + (num_rows - i - 1) * 2;
                    if k < n {
                        result.push(s.as_bytes()[k as usize] as char);
                    }
                }
                j += num_rows * 2 - 2;
            }
        }
        result
    }
}