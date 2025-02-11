#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int part_len = part.length();
        string ans;

        for (char c : s) {
            ans.push_back(c);

            if (ans.length() >= part_len &&
                ans.compare(ans.length() - part_len, part_len, part) == 0) {
                ans.erase(ans.end() - part_len, ans.end());
            }
        }

        return ans;
    }
};