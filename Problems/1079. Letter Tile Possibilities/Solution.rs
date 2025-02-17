impl Solution {
    pub fn num_tile_possibilities(tiles: String) -> i32 {
        // Create a frequency array for uppercase English letters
        let mut counts = [0_u8; 26];

        // Helper function for backtracking
        fn backtrack(counts: &mut [u8; 26]) -> i32 {
            let mut sum: i32 = 0;
            for i in 0..26 {
                if counts[i] == 0 {
                    continue;
                }
                // Choose the tile
                counts[i] -= 1;
                // Count the current sequence
                sum += 1;
                // Continue building sequences with the remaining tiles
                sum += backtrack(counts);
                // Backtrack: restore the tile count
                counts[i] += 1;
            }
            sum
        }

        // Populate the frequency array with tile counts
        tiles.bytes().for_each(|b| counts[(b - b'A') as usize] += 1);

        // Start the backtracking process
        backtrack(&mut counts)
    }
}