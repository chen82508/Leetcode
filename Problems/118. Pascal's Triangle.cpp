class Solution {

public :

    vector<vector<int>> generate ( int numRows ) {
        vector<vector<int>> res ;

        if ( numRows < 1 ) return res ;

        // Declare a vector which has one integral with value 1.
        vector<int> row ( 1, 1 ) ;

        res.push_back ( row ) ;

        for ( int i = 2 ; i <= numRows ; i ++ ) {
            int prev = 1 ;

            for ( int j = 1 ; j < i - 1 ; j ++ ) {
                int temp = row [ j ] ;
                row [ j ] += prev ;
                prev = temp ;
            }

            row.push_back ( 1 ) ;
            res.push_back ( row ) ;
        }

        return res ;
    }
};
