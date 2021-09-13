#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    string intToRoman ( int num ) {
        string dict [ 13 ] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ;
        int val [ 13 ] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 } ;
        string result ;

        for ( int i = 0 ; i < 13 ; i ++ ) {
            if ( num >= val [ i ] ) {
                int count = num / val [ i ] ;
                num %= val [ i ] ;

                for ( int j = 0 ; j < count ; j ++ ) result.append ( dict [ i ] ) ;
            }
        }

        return result;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    int num ;

    while ( cin >> num ) {
        Solution Roman = Solution() ;

        cout << Roman.intToRoman ( num ) << endl ;
    }

    return  0 ;
}
