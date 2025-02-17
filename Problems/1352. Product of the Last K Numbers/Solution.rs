struct ProductOfNumbers {
    prefix: Vec<i32>,
}


/** 
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl ProductOfNumbers {

    fn new() -> Self {
        ProductOfNumbers { prefix: vec![1] }
    }
    
    fn add(&mut self, num: i32) {
        if num == 0 {
            self.prefix = vec![1];
        } else {
            let last = *self.prefix.last().unwrap();
            self.prefix.push(last * num);
        }
    }
    
    fn get_product(&self, k: i32) -> i32 {
        let n = self.prefix.len();
        if k as usize >= n {
            return 0;
        }
        return self.prefix[n - 1] / self.prefix[n - k as usize - 1];
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * let obj = ProductOfNumbers::new();
 * obj.add(num);
 * let ret_2: i32 = obj.get_product(k);
 */