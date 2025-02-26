impl Solution {
    pub fn my_pow(x: f64, n: i32) -> f64 {
        if n == 0 {
            return 1.0;
        }

        let mut ans: f64 = 1.0;
        let mut binary_form = n as i64;
        let mut base = x;
        if n < 0 {
            base = 1.0 / base;
            binary_form = -binary_form;
        }

        while binary_form > 0 {
            if binary_form & 1 == 1 {
                ans *= base;
            }
            base *= base;
            binary_form /= 2;
        }

        return ans;
    }
}