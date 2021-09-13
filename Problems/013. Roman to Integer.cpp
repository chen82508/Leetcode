#include <iostream>
#include <cmath>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int romanToInt ( string s ) {
        int output = 0 ;

        for ( int index = 0 ; index < s.length() ; index ++ ) {
            switch ( s [ index ] ) {
                case 'I' :
                    output ++ ;
                    break ;

                case 'V' :
                    output += 5 ;
                    if ( s [ index - 1 ] == 'I' ) output -= 2 ;
                    break ;

                case 'X' :
                    output += 10 ;
                    if ( s [ index - 1 ] == 'I' ) output -= 2 ;
                    break ;

                case 'L' :
                    output += 50 ;
                    if ( s [ index - 1 ] == 'X' ) output -= 20 ;
                    break ;

                case 'C' :
                    output += 100 ;
                    if ( s [ index - 1 ] == 'X' ) output -= 20 ;
                    break ;

                case 'D' :
                    output += 500 ;
                    if ( s [ index - 1 ] == 'C' ) output -= 200 ;
                    break ;

                case 'M' :
                    output += 1000 ;
                    if ( s [ index - 1 ] == 'C' ) output -= 200 ;
                    break ;
            }
        }

        return output ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    string Num ;

    while ( cin >> Num ) {
        Solution result = Solution() ;

        cout << result.romanToInt ( Num ) << endl ;
    }

    return 0 ;
}
