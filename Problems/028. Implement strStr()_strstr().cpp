#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public:

    int strStr ( string haystack, string needle ) {
        const char *h = haystack.c_str();
        const char *n = strstr(h, needle.c_str());

        if ( n ) return int ( n - h ) ;
        else return -1 ;
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
