#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freq;
        for (char c : tiles) freq[c]++;

        return backtrack(freq);
    }
private:
    int backtrack(unordered_map<char, int>& freq) {
        int count = 0;
        for (auto& [ch, num] : freq) {
            if (num > 0) {
                count++;
                num--;
                count += backtrack(freq);
                num++;
            }
        }
        return count;
    }
};