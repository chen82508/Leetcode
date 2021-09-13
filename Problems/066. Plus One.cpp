class Solution {

public :

    vector<int> plusOne ( vector<int>& digits ) {
        vector<int> vctResult ( digits.size(), 0 ) ;
        int carry = 1 ;

        for ( int index = digits.size() - 1 ; index >= 0 ; index -- ) {
            carry += digits [ index ] ;
            vctResult [ index ] = carry % 10 ;
            carry /= 10 ;
        }

        if ( carry ) vctResult.insert ( vctResult.begin(), 1 ) ;
        return vctResult ;
    }

};
