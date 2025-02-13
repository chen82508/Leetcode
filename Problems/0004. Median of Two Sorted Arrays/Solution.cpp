#include <bits/stdc++.h>
using namespace std;

class Solution {
public :
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int m = nums1.size() ;
        const int n = nums2.size() ;
        
        if (m > n) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int left = 0, right = m;
        int totalLeft = (m + n + 1) / 2; // The number of left half.
        
        while (left <= right) {
            int i = (left + right) / 2; // Split point of nums1.
            int j = totalLeft - i; // Split point of nums2.

            int nums1_LeftMax = i == 0 ? INT_MIN : nums1[i - 1];
            int nums1_RightMin = i == m ? INT_MAX : nums1[i];
            int nums2_LeftMax = j == 0 ? INT_MIN : nums2[j - 1];
            int nums2_RightMin = j == n ? INT_MAX : nums2[j];
            
            if (nums1_LeftMax <= nums2_RightMin && nums2_LeftMax <= nums1_RightMin) {
                if ((m + n) % 2 == 1) {
                    return max(nums1_LeftMax, nums2_LeftMax);
                } else {
                    return (max(nums1_LeftMax, nums2_LeftMax) + min(nums1_RightMin, nums2_RightMin)) / 2.0;
                }
            } else if (nums1_LeftMax > nums2_RightMin) {
                right = i - 1;
            } else {
                left = i + 1;
            }
        }

        return 0;
    }
};