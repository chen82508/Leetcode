#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num2.size() > num1.size()) return addStrings(num2, num1);

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        string ans;
        int carry = 0;
        for (int i = 0; i < num1.size(); i++) {
            int num_int1 = num1[i] - '0';
            int num_int2 = i < num2.size() ? num2[i] - '0' : 0;

            carry = num_int1 + num_int2 + carry;
            ans.push_back(char((carry % 10) + '0'));
            carry /= 10;
        }

        if (carry > 0) ans.push_back(char(carry + '0'));

        reverse(ans.begin(), ans.end());
        return ans;
    }
};