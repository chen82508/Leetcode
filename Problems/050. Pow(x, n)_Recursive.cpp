#include <bits/stdc++.h>

using namespace std ;

class Solution {

public :

    double myPow ( double x, int n ) {
        return n >= 0 ? powPositive ( x, n ) : 1 / powPositive ( x, -n ) ;
    }

private :

    double powPositive ( double x, int n ) {
        if ( n == 0 ) return 1 ;

        double dblResult = powPositive ( x, n / 2 ) ;

        dblResult *= dblResult ;

        if ( n % 2 ) dblResult *= x ;

        return dblResult ;
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
