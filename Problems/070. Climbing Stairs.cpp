#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int climbStairs ( int n ) {
        if ( n == 0 || n == 1 ) return 1 ;

        int intInitialValue [ 2 ] = { 1, 1 } ;

        for ( int index = 2 ; index <= n ; index ++ ) {
            int intTmp = intInitialValue [ 0 ] + intInitialValue [ 1 ] ;
            intInitialValue [ 0 ] = intInitialValue [ 1 ] ;
            intInitialValue [ 1 ] = intTmp ;
        }

        return intInitialValue [ 1 ] ;
    }
};

//================= LeetCode Solution Region =================//

int main() {
    int n ;

    while ( cin >> n ) {
        Solution solClimbStairs = Solution();
        cout << solClimbStairs.climbStairs ( n ) << endl ;
    }

    return 0 ;
}
