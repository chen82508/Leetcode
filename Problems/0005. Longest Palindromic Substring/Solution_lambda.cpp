#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len == 1) return s;

        int start = 0, maxLen = 0;
        for (int i = 0; i < len; i++) {
            auto expand = [&](int left, int right) {
                while (left >= 0 && right <= s.size() && s[left] == s[right]) {
                    if (right - left + 1 > maxLen) {
                        maxLen = right - left + 1;
                        start = left;
                    }
                    left--, right++;
                }
            };
            expand(i, i);
            expand(i, i + 1);
        }

        return s.substr(start, maxLen);
    }
};