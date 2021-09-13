/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

public :

    TreeNode* sortedArrayToBST ( vector<int>& nums ) {
        return connectTreeNode ( nums, nums.size(), nums.begin(), nums.end() ) ;
    }

private :

    TreeNode* connectTreeNode ( vector<int>& nums, int iSize, vector<int>::iterator itStart, vector<int>::iterator itEnd ) {
        if ( itStart == itEnd ) return nullptr ;


        int iLsize = iSize / 2 ;
        auto aValue = itStart + iLsize ;
        // notice here right iSize
        int iRsize = itEnd - ( aValue + 1 ) ;

        TreeNode* tnRoot = new TreeNode ( *aValue ) ;
        tnRoot -> left = connectTreeNode ( nums, iLsize, itStart, aValue ) ;
        tnRoot -> right = connectTreeNode ( nums, iRsize, aValue + 1, itEnd ) ;

        return tnRoot;
    }
};
