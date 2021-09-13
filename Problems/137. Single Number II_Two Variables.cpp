#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int singleNumber ( vector<int>& nums ) {
        int a = 0, b = 0 ;

        for ( int index = 0 ; index < nums.size() ; index ++ ) {
            b = ( b ^ nums [ index ] ) & ~a ;
            a = ( a ^ nums [ index ] ) & ~b ;
        }

        return b ;
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
