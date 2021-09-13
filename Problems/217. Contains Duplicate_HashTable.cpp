class Solution {

public :

    bool containsDuplicate ( vector<int>& nums ) {
        unordered_map<int, int> umMap ;

        for ( int iIdx = 0 ; iIdx < nums.size() ; iIdx ++ ) {
            if ( umMap.find ( nums [ iIdx ] ) != umMap.end() ) return true ;

            ++ umMap [ nums [ iIdx ] ] ;
        }

        return false ;
    }
};
