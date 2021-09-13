#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int singleNumber ( vector<int>& nums ) {
        int iOne = 0, iTwo = 0, iThree = 0 ;

        for ( int index = 0 ; index < nums.size() ; index ++ ) {
            iTwo |= iOne & nums [ index ] ;
            iOne ^= nums [ index ] ;
            iThree = iOne & iTwo ;
            iOne &= ~iThree ;
            iTwo &= ~iThree ;
        }

        return iOne ;
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

