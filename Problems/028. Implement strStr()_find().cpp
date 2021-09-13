#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public:

    int strStr ( string haystack, string needle ) {
        return haystack.find ( needle ) ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    string haystack, needle ;

    while ( cin >> haystack >> needle ) {
        Solution stringMatch = Solution() ;

        cout << stringMatch.strStr ( haystack, needle ) << endl ;
    }

    return 0 ;
}
