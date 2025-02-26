#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    void expand(const string& s, int left, int right, int& maxLen, int& start) {
        while (left >= 0 && right <= s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--, right++;
        }
    }
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if (len == 1) return s;

        int start = 0, maxLen = 0;
        for (int i = 0; i < len; i++) {
            expand(s, i, i, maxLen, start);
            expand(s, i, i + 1, maxLen, start);
        }

        return s.substr(start, maxLen);
    }
};