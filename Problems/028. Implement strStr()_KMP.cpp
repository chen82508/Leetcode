#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    void constructTable ( vector<int> &table, string w ) {
	    if ( w.length() < 1 ) return ;

	    table [ 0 ] = -1 ;
	    int match = 0 ;

	    for ( int i = 1 ; i < w.length() - 1 ; ) {
		    if ( w [ i ] == w [ match ] ) {
			    table [ i + 1 ] = ++ match ;
			    ++ i ;
		    }
		    else if ( match > 0 ) match = table [ match ] ;
		    else ++ i ;
	    }
    }

    int strStr ( string haystack, string needle ) {

	    int result = -1 ;

	    if ( needle.length() == 0 ) return 0 ;

	    vector<int> partialMatchTable ( needle.length(), 0 ) ;
	    constructTable ( partialMatchTable, needle ) ;

	    int index = 0 ;
	    for ( unsigned i = 0 ; i + index < haystack.length() ; ) {
		    if ( haystack [ i + index ] == needle [ index ] ) {
			    ++ index ;
			    if ( index == needle.length() ) {
				    result = i ;
				    break ;
			    }
		    }
		    else {
			    if ( partialMatchTable [ index ] > -1 ) {
				    i = i + index - partialMatchTable [ index ] ;
				    index = partialMatchTable [ index ] ;
			    }
			    else {
				    index = 0 ;
				    ++ i ;
			    }
		    }
	    }

	    return result ;
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
