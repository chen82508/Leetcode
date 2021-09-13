#include <bits/stdc++.h>
#include <string>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    string countAndSay ( int n ) {
        // Base cases
        if (n <= 1) return "1" ;
        if (n == 2) return "11" ;

        // Find n'th term by generating all terms from 3 to
        // n-1.  Every term is generated using previous term
        string result = "11";
        for ( int i = 3 ; i <= n ; i ++ ) {
            // In below for loop, previous character
            // is processed in current iteration. That
            // is why a dummy character is added to make
            // sure that loop runs one extra iteration.
            result += '$';
            int len = result.length() ;

            int cnt = 1 ;
            string  tmp = "" ;

            // Process previous term to find the next term
            for ( int j = 1 ; j < len ; j ++ ) {
                // If current character does't match
                if ( result [ j ] != result [ j - 1 ] ) {
                    tmp += cnt + '0' ;
                    tmp += result [ j - 1 ] ;
                    cnt = 1 ;
                }

                //  If matches, then increment count of matching
                // characters
                else cnt ++ ;
            }

            // Update result
            result = tmp ;
        }

        return result ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    int n ;

    while ( cin >> n ) {
        Solution stringMatch = Solution() ;

        cout << stringMatch.countAndSay ( n ) << endl ;
    }

    return 0 ;
}
