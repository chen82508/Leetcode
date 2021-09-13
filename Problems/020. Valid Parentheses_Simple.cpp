#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :
    bool isValid ( string s ) {
        stack <char> parentheses ;

        for ( int i = 0 ; i < s.size() ; ++ i ) {
            if ( s [ i ] == '(' || s [ i ] == '[' || s [ i ] == '{') parentheses.push ( s [ i ] ) ;
            else {
                if ( parentheses.empty() ) return false ;
                if ( s [ i ] == ')' && parentheses.top() != '(') return false ;
                if ( s [ i ] == ']' && parentheses.top() != '[') return false ;
                if ( s [ i ] == '}' && parentheses.top() != '{') return false ;

                parentheses.pop() ;
            }
        }

        return parentheses.empty() ;
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
