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
        return arrayToBST ( nums, 0, nums.size() - 1 ) ;
    }

private :

    TreeNode *arrayToBST ( vector<int>& vctNums, int iStart, int iEnd ) {
        if ( iStart > iEnd ) return NULL ;

        int iMid = iStart + ( iEnd - iStart + 1 ) / 2 ;

        TreeNode *tnRoot = new TreeNode ( vctNums [ iMid ] ) ;
        tnRoot -> left = arrayToBST ( vctNums, iStart, iMid - 1 ) ;
        tnRoot -> right = arrayToBST ( vctNums, iMid + 1, iEnd ) ;

        return tnRoot ;
    }
};
