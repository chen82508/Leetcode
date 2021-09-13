/***********************************************************************
 *
 * Compare the numbers of the highest digit and the lowest digit.
 * If they are not identical, then the input is not a palindrome number.
 * If they are identical, then remove the two numbers.
 * Repeat the above ways to judge if it is palindrome number or not.
 * End judge when the current value = 0.
 *
 ***********************************************************************/

class Solution {
public:
    bool isPalindrome ( int x ) {
        if ( x < 0 ) return false ;

        int y = 1 ;

        while ( x / y >= 10 ) y *= 10 ;

        while ( x ) {
            if ( x / y != x % 10 ) return false ;

            x = (x % y) / 10 ;
            y /= 100 ;
        }

        return true ;
    }
};
