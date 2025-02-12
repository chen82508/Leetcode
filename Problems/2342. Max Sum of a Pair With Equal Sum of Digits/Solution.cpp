#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    int sumDigits(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        vector<int> sameDigit(82, -1);
        int sum, maxSum = -1;
        for(int num : nums) {
            sum = sumDigits(num);
            if (sameDigit[sum] != -1) {
                maxSum = max(maxSum, sameDigit[sum] + num);
                sameDigit[sum] = max(sameDigit[sum], num);
            }
            else {
                sameDigit[sum] = num;
            }
        }
        return maxSum;
    }
};