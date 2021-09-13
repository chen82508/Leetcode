class Solution {

public:

    int maxProfit ( vector<int>& prices ) {
        int intMaxPft = 0 ;

        for ( int index = 1 ; index < prices.size() ; index ++ )
            intMaxPft += prices [ index ] > prices [ index - 1 ] ? prices [ index ] - prices [ index - 1 ] : 0 ;

        return intMaxPft ;
    }
};
