/***************************************************************************************
 *
 * Use two variables to record the previous length (last length) and the current length
 * separately.
 *
 * Check the following conditions :
 *  1. If the current character is alphabet, it means the current word has not finished,
 *     then update the current length.
 *  2. If the current character is space and the current length is not equal to 0, it
 *     means the current word has just finished, then update the last length by current
 *     length.
 *  3. If the current character is space and the current length is equal to 0, it means
 *     the previous character is also space, do nothing.
 *  4. We only update the last length when the space character is read, when there is no
 *     space character after the last word, the last length won't be updated.
 *     According to the above contents, if the current length is not equal to 0 while
 *     finishing searching the string, the current length is the actual length of the
 *     last word. If there is any space character after the last word, then the last
 *     last length is the actual length.
 *
 ***************************************************************************************/

#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    int lengthOfLastWord ( string s ) {
        int intCurLen = 0, intLastLen = 0 ;

        for ( int index = 0 ; index < s.size() ; index ++ ) {
            if ( isalpha ( s [ index ] ) ) intCurLen ++ ; // Only check whether the current character is alphabet
            //if ( isalnum ( s [ index ] ) ) intCurLen ++ ; // Check whether the current character is alphabet or number
            else if ( intCurLen != 0 ) {
                intLastLen = intCurLen ;
                intCurLen = 0 ;
            }
        }

        return intCurLen == 0 ? intLastLen : intCurLen ;
    }
};

//================= LeetCode Solution Region =================//

int main() {
    string s ;

    while ( getline ( cin, s ) ) {
        Solution res = Solution() ;
        cout << res.lengthOfLastWord ( s ) << endl ;
    }

    return 0 ;
}
