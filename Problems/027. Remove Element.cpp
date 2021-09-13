class Solution {

public:

    int removeElement ( vector<int>& nums, int val ) {
        int n = 0 ;

        for ( int index = 0 ; index < nums.size() ; index ++ ) {
            if ( nums [ index ] != val ) nums [ n ++ ] = nums [ index ] ;
        }

        nums.resize ( n ) ;

        return n ;
    }
};
