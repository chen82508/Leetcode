#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int addDigits ( int num ) {
        return ( num - 1 ) % 9 + 1 ;
    }
};

//================= LeetCode Solution Region =================//

int main() {
    int iNum ;
    Solution sRes = Solution() ;

    while ( cin >> iNum ) cout << sRes.addDigits ( iNum ) << endl ;

    return 0 ;
}
