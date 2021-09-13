#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    bool isPalindrome ( string s ) {
        int iLeft = 0, iRight = s.size() - 1 ;

        while ( iLeft < iRight ) {
            while ( iLeft < s.size() && !isalnum ( s [ iLeft ] ) ) iLeft ++ ;
            while ( iRight >= 0  && !isalnum ( s [ iRight ] ) ) iRight -- ;
            if ( iLeft >= iRight ) return true ;
            if ( tolower ( s [ iLeft ++ ] ) != tolower ( s [ iRight -- ] ) ) return false ;
        }

        return true ;
    }
};

//================= LeetCode Solution Region =================//

int main() {
    string s ;

    while ( getline ( cin, s ) ) {
        Solution res = Solution();
        cout << res.isPalindrome ( s ) << endl ;
    }

    return 0 ;
}
