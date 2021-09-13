#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int mySqrt ( int x ) {
        if ( x == 0 ) return 0 ;

        double dblResult = 1, dblPreValue = 0 ;

        while ( dblResult != dblPreValue ) {
            dblPreValue = dblResult ;
            dblResult = ( dblResult + x / dblResult ) / 2 ;
        }

        return static_cast<int> ( dblResult ) ;
    }

};

//================= LeetCode Solution Region =================//

int main() {
    int x ;

    while ( cin >> x ) {
        Solution res = Solution() ;
        cout << res.mySqrt ( x ) << endl ;
    }

    return 0 ;
}
