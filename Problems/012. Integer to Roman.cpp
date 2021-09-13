#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    string intToRoman ( int num ) {
        string output = "" ;

        while ( num > 0 ) {
            if ( num >= 1000 ) { num -= 1000 ; output += "M" ; }

            else if ( num >= 900 ) { num -= 900 ; output += "CM" ; }

            else if ( num >= 500 ) { num -= 500 ; output += "D" ; }

            else if ( num >= 400 ) { num -= 400 ; output += "CD" ; }

            else if ( num >= 100 ) { num -= 100 ; output += "C" ; }

            else if ( num >= 90 ) { num -= 90 ; output += "XC" ; }

            else if ( num >= 50 ) { num -= 50 ; output += "L" ; }

            else if ( num >= 40 ) { num -= 40 ; output += "XL" ; }

            else if ( num >= 10 ) { num -= 10 ; output += "X" ; }

            else if ( num >= 9 ) { num -= 9 ; output += "IX" ; }

            else if ( num >= 5 ) { num -= 5 ; output += "V" ; }

            else if ( num >= 4 ) { num -= 4 ; output += "IV" ; }

            else { num -= 1 ; output += "I" ; }
        }

        return output ;
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
