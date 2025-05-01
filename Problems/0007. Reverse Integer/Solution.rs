impl Solution {
    pub fn reverse(x: i32) -> i32 {
        let (mut result, mut n): (i32, i32) = (0, x);

        while n != 0 {
            // handle overflow/underflow
            if result > std::i32::MAX / 10  || result < std::i32::MIN / 10 {
                return 0;
            }

            result = result * 10 + n % 10;
            n /= 10;
        }

        return result;
    }
}