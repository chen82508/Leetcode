#include <bits/stdc++.h>

using namespace std ;

class Solution {

public :
    double myPow ( double x, int n ) {
        bool bolIsNegPow = n < 0 ;

        n = abs ( n ) ;

        double dblResult = 1 ;

        for ( int iIdx = 31 ; iIdx >= 0 ; iIdx -- ) {
            dblResult = dblResult * dblResult ;

            if ( n & ( 1 << iIdx ) ) dblResult = dblResult * x ;
        }

        return bolIsNegPow ? 1 / dblResult : dblResult ;
    }

};

int main() {
    Solution sPowXN = Solution() ;
    int iExp ;
    double dblSub ;

    while ( cin >> dblSub >> iExp ) {
        cout << sPowXN.myPow ( dblSub, iExp ) << endl ;
    }

    return 0 ;
}
