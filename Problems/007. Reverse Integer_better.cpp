/***********************************************************************************
 *
 * INT_MAX = 2147483647, INT_MIN = -2147483648
 * If result > 214748364, then abs(result*10)>=2147483650 must overflow
 * If result = 214748364, then there must exist an x % 10 = 1
 * If x % 10 = 2, it means the original x = 2463847412 > INT_MAX
 * If the input is contradictory to int data type, the input will convert to INT_MAX
 *
 ***********************************************************************************/

class Solution {
public:
    int reverse ( int x ) {
        int result = 0 ;

        while ( x != 0 ) {

            // handle overflow/underflow
            if ( abs ( result ) > 214748364 ) return 0 ;

            result = result * 10 + x % 10 ;
            x /= 10 ;
        }

        return result ;
    }
};
