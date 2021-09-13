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

    bool isSymmetric ( TreeNode* root ) {
        if ( !root ) return true ;

        return chkSymmetric ( root -> left, root -> right ) ;
    }

    bool chkSymmetric ( TreeNode* left, TreeNode* right ) {
        if ( !left && !right ) return true ;
        if ( ( !left && right ) || ( left && !right ) || left -> val != right -> val ) return false ;

        return chkSymmetric ( left -> left, right -> right ) && chkSymmetric ( left -> right, right -> left ) ;
    }
};
