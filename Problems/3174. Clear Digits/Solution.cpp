#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (isdigit(c) && !st.empty()) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }
        
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};