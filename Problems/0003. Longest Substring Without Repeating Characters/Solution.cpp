#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if (len == 0) return 0;

        vector<int> map(256, -1); // The length is set to 256 so that the index corresponds to the ASCII value.
        int left = 0, right = 0;
        int maxLen = INT_MIN;
        
        while (right < len) {
            auto c = s[right];
            if (map[c] != -1) left = max(map[c] + 1, left);

            map[c] = right;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};