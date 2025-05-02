#include <bits/stdc++.h>

using namespace std;

class Solution {
public :
    string convert (string s, int numRows ) {
        int n = s.size ();
        if (numRows == 1 || numRows >= n) return s; // Special case: single row or numRows >= string length
        
        string result = "";
        
        for (int i = 0; i < numRows; i++) {
            int j = i; // Start index for the current row
            while (j < n) {
                result += s[j]; // Add vertical element
                if (i != 0 && i != numRows - 1) { // For middle rows, add diagonal element
                    int k = j + (numRows - i - 1) * 2; // Calculate diagonal element index
                    if (k < n) result += s[k];
                }
                j += (numRows - 1) * 2; // Move to the next vertical element in the same row
            }
        }
        
        return result;
    }
};
/*
 * The key idea is to identify the "zigzag pattern" and calculate the indices of characters
 * in each row based on the pattern's periodicity.
 *
 * Periodicity:
 * - The length of one full zigzag cycle is `cycleLen = 2 * numRows - 2`.
 * - Each cycle consists of vertical elements and diagonal elements.
 *
 * For each row `i`:
 * - Vertical elements are at indices: `i + cycleLen * j` (where `j` is the cycle number).
 * - Diagonal elements (only for middle rows) are at indices: `i + cycleLen * j + (numRows - i - 1) * 2`.
 *
 * Special cases:
 * - The first and last rows only have vertical elements.
 */