#include <bits/stdc++.h>

using namespace std ;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        return n == 1;
    }
};

int main() {
    int iInPut ;

    while ( cin >> iInPut ) {
        Solution Result = Solution();

        Result.isUgly ( iInPut ) ? cout << "true" : cout << "false" ;
        cout << endl ;
    }

    return 0 ;
}
