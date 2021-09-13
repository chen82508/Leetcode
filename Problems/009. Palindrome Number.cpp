class Solution {
public:
    bool isPalindrome ( int x ) {
        if ( x < 0 ) return false ;

        int result = 0, y = x ;

        while ( y ) {
            if ( abs ( result ) > ( INT_MAX / 10 ) ) return false ;

            result = result * 10 + y % 10 ;
            y /= 10 ;
        }

        return result == x ;
    }
};
