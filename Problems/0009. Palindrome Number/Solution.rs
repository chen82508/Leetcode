impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        if x < 0 {
            return false;
        }

        let (mut x_reserve, mut rem): (i64, i64) = (0, 0);
        let mut n: i64 = x as i64;

        while n > 0 {
            rem = n % 10;
            x_reserve = x_reserve * 10 + rem;
            n /= 10;
        }

        if x_reserve == (x as i64) {
            return true;
        }
        return false;
    }
}