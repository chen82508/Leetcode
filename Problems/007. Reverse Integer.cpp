/***********************************************************************
 *
 * The reverse of x is possibly larger than INT_MAX or less than INT_MIN
 * Use a unsigned long long xx to save the value of x
 *
 ***********************************************************************/

class Solution {
public:
    int reverse ( int x ) {
        unsigned long long xx ;

        if ( x == INT_MIN )
            xx = ( unsigned long long ) INT_MAX + 1 ;
        else
            xx = x < 0 ? -x : x ;

        unsigned long long result = 0 ;

        while ( xx ) {
            result  = ( result * 10 ) + ( xx % 10 ) ;
            xx /= 10 ;
        }

        if ( ( result > ( unsigned long long ) INT_MAX && x > 0) ||
             ( result > ( unsigned long long ) INT_MAX + 1 && x < 0 ) ) return 0 ;

        return x < 0 ? -result : result ;
    }
};
