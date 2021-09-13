class Solution {

public :

    void merge ( vector<int>& nums1, int m, vector<int>& nums2, int n ) {
        int iPntA = m - 1, iPntB = n - 1, iPntC = m + n - 1 ;

        while ( iPntA >= 0 && iPntB >= 0 ) nums1 [ iPntC -- ] = nums1 [ iPntA ] > nums2 [ iPntB ] ? nums1 [ iPntA -- ] : nums2 [ iPntB -- ] ;

        while ( iPntB >= 0 ) nums1 [ iPntC -- ] = nums2 [ iPntB -- ] ;
    }
};
