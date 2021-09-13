#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    bool isPowerOfTwo ( int n ) {
        int iCount = 0 ;

        while ( n > 0 ) {
            iCount += ( n & 1 ) ;
            n >>= 1 ;
        }

        return iCount == 1 ;
    }
};

//================= LeetCode Solution Region =================//

int main() {
    int iNum ;
    Solution result = Solution() ;

    while ( cin >> iNum ) {
        string strIsOrNot = result.isPowerOfTwo ( iNum ) ? "true" : "false" ;
        cout << strIsOrNot << endl ;
    }

    return 0 ;
}
