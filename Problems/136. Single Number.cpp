/*********************************************
 *
 * Use the XOR operator to compare the result.
 *
 *********************************************/

#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int singleNumber ( vector<int>& nums ) {
        int iResult = 0 ;

        for ( int index = 0 ; index < nums.size() ; index ++ ) iResult ^= nums [ index ] ;

        return iResult ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    int Ary [] = { 1, 1, 2, 3, 3, 4, 4 } ;
    vector<int> vctNums ( Ary, Ary + sizeof ( Ary ) / sizeof ( Ary [ 0 ] ) ) ;

    Solution Result = Solution() ;

    cout << Result.singleNumber ( vctNums ) << endl ;

    return 0 ;
}
