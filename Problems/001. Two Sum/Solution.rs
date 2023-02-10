impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut num_map: HashMap<i32, i32> = HashMap::new();
        
        for (i, num) in nums.iter().enumerate() {
            num_map.insert(*num, i as i32);
        }
        
        for (i, num) in nums.iter().enumerate() {
            let complement = target - num;

            if let Some(&index) = num_map.get(&complement) {
                if index != i as i32{
                    return vec![i as i32, index];
                }
            }
        }

        vec![]
    }
}