#include <unordered_map>
#include <vector>

// Runtime 2ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        vector<int> ans(2);

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (numMap.find(complement) != numMap.end()) {
                ans[0] = numMap[complement];
                ans[1] = i;
                return ans;
            }
            
            numMap[nums[i]] = i;
        }

        return ans;
    }
};