#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int len = nums.size();
        if (len == 1) return abs(nums[0]);

        int currMax = nums[0], currMin = nums[0];
        int maxSum = nums[0], minSum = nums[0];

        for (int i = 1; i < len; i++) {
            currMax = max(currMax + nums[i], nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(currMin + nums[i], nums[i]);
            minSum = min(minSum, currMin);
        }

        return max(abs(maxSum), abs(minSum));
    }
};