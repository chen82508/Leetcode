#include <bits/stdc++.h>

using namespace std ;

//================= LeetCode Solution Region =================//

class Solution {

public :

    string addBinary ( string a, string b ) {
        string strSum = "" ;
        int intEndA = a.size() - 1, intEndB = b.size() - 1, carry = 0 ;

        while ( intEndA >= 0 || intEndB >= 0 ) {
            int intPointA = intEndA >= 0 ? a [ intEndA -- ] - '0' : 0 ;
            int intPointB = intEndB >= 0 ? b [ intEndB -- ] - '0' : 0 ;

            int intSum = intPointA + intPointB + carry ;

            strSum = static_cast<char>( intSum % 2 + '0' ) + strSum ;
            carry = intSum / 2 ;
        }

        return carry == 1 ? "1" + strSum : strSum ;
    }
};

//================= LeetCode Solution Region =================//

int main () {
    string a, b ;

    while ( cin >> a >> b ) {
        Solution addBin = Solution();
        cout << addBin.addBinary ( a, b ) << endl ;
    }

    return 0;
}
