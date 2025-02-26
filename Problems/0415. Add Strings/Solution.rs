impl Solution {
    pub fn add_strings(num1: String, num2: String) -> String {
        if (num2.len() > num1.len()) {
            return Self::add_strings(num2, num1);
        }

        let mut rev_num1 = num1.chars().rev().collect::<String>();
        let mut rev_num2 = num2.chars().rev().collect::<String>();

        let mut ans = Vec::new();
        let mut carry:u8 = 0;
        for (i, c) in rev_num1.char_indices() {
            let int1 = rev_num1.as_bytes()[i] - b'0';
            let int2 = if i < rev_num2.len() { rev_num2.as_bytes()[i] - b'0' } else { 0 };

            carry = int1 + int2 + carry;
            ans.push(((carry % 10) + b'0') as char);
            carry = carry / 10;
        }

        if carry > 0 {
            ans.push((carry + b'0') as char);
        }

        ans.reverse();
        return ans.iter().collect();
    }
}