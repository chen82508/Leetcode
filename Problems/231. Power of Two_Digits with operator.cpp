#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    bool isPowerOfTwo ( int n ) {
        return n > 0 && !( n & ( n - 1 ) ) ;
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
