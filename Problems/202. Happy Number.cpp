#include <bits/stdc++.h>

using namespace std ;

class Solution {

public :

    bool IsHappy ( int iNum ) {
        while ( iNum != 1 && iNum != 4 ) {
            int iTmp = 0 ;

            while ( iNum ) {
                iTmp += ( iNum % 10 ) * ( iNum % 10 ) ;
                iNum /= 10 ;
            }

            iNum = iTmp ;
        }

        return iNum == 1 ;
    }
};

int main() {
    int iNum ;

    while ( cin >> iNum ) {
        Solution Result = Solution() ;

        Result.IsHappy ( iNum ) ? cout << "true" : cout << "false" ;
        cout << endl ;
    }

    return 0 ;
}
