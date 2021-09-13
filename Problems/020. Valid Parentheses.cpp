#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    bool isValid ( string s ) {
        stack <char> stk ;

        for ( int i = 0 ; i < s.size() ; i ++ ) {
            if ( isLeft ( s [ i ] ) ) stk.push ( s [ i ] ) ;
            else {
                if ( stk.empty() || ! isClose ( stk.top(), s [ i ] ) ) return false ;
                stk.pop() ;
            }
        }

        return stk.empty() ;
    }

    bool isLeft ( char a ) {
        return ( a == '(' || a == '[' || a == '{' ) ;
    }

    bool isClose ( char L, char R ) {
        if ( L == '(' ) return R == ')' ;
        if ( L == '[' ) return R == ']' ;
        if ( L == '{' ) return R == '}' ;

        return false ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    string s ;

    while ( cin >> s ) {
        Solution Valid = Solution() ;

        if ( Valid.isValid ( s ) ) cout << "true" << endl ;
        else cout << "false" << endl ;
    }

    return 0 ;
}
