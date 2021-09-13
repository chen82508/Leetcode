class Solution {

public:

    int maxProfit ( vector<int>& prices ) {
        if ( prices.empty() ) return 0 ;

        int intMaxPft = 0, intMinPrc = prices [ 0 ] ;

        for ( int index = 1 ; index < prices.size() ; index ++ ) {
            if ( prices [ index ] < intMinPrc ) intMinPrc = prices [ index ] ;
            else intMaxPft = max ( prices [ index ] - intMinPrc, intMaxPft ) ;
        }

        return intMaxPft ;
    }
};
