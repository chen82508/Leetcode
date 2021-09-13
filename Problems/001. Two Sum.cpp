class Solution {
public:
    vector<int> twoSum ( vector<int>& nums, int target ) {
        map<int, int> hashTable ;
        map<int, int> :: iterator iter ;

        vector<int> ansIndex (2) ;

        for ( int i = 0 ; i < nums.size() ; i ++ ) {
            int x = nums [ i ] ;
            iter = hashTable.find ( target - x ) ;

            // If found. Return the result.
            if ( iter != hashTable.end() ) {
                ansIndex [ 0 ] = iter -> second ;
                ansIndex [ 1 ] = i ;
                return ansIndex ;
            }
            // If not found. Put it in the HashTable.
            else
                hashTable [ x ] = i ;
        }
    }
};
