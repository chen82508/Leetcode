/**************************************************
 *
 * Use & operator to compute the sum of each digit.
 * Then take sum mod 3.
 * The last remaining number is the result.
 *
 **************************************************/

#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int singleNumber ( vector<int>& nums ) {
        int iResult = 0 ;

        for ( int i = 0 ; i < 32 ; i ++ ) {
            int iSum = 0 ;

            for ( int j = 0 ; j < nums.size() ; j ++ ) iSum += ( nums [ j ] >> i ) & 1 ;

            iResult |= ( iSum % 3 ) << i ;
        }

        return iResult ;
    }
};

//================= LeetCode Solution Region =================//

int main() {
    int Ary[] = { 14, 14, 14, 9 } ;

    vector<int> vctNums ( Ary, Ary + sizeof ( Ary ) / sizeof ( Ary [ 0 ] ) ) ;

    Solution res = Solution() ;

    cout << res.singleNumber ( vctNums ) << endl ;

    return 0 ;
}
