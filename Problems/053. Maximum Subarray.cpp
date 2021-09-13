#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int maxSubArray ( vector<int>& nums ) {
        int iMaxSum = nums [ 0 ], iCurrSum = nums [ 0 ] ;

        for ( int i = 1 ; i < nums.size() ; i ++ ) {
            iCurrSum = iCurrSum <= 0 ? nums [ i ] : nums [ i ] + iCurrSum ;
            iMaxSum = max ( iMaxSum, iCurrSum ) ;
        }

        return iMaxSum ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    int Ary[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 } ;
    vector<int> vctNums ( Ary, Ary + sizeof ( Ary ) / sizeof ( Ary [ 0 ] ) ) ;

    Solution res = Solution() ;

    cout << res.maxSubArray ( vctNums ) << endl ;

    return 0 ;
}
