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

        queue<TreeNode*> qLeft, qRight ;
        qLeft.push ( root -> left ) ;
        qRight.push ( root -> right ) ;

        while ( !qLeft.empty() && !qRight.empty() ) {
            TreeNode* nodeL = qLeft.front() ;
            TreeNode* nodeR = qRight.front() ;
            qLeft.pop() ;
            qRight.pop() ;

            if ( !nodeL && !nodeR ) continue ;
            if ( ( !nodeL && nodeR ) || ( nodeL && !nodeR ) ) return false ;
            if ( nodeL -> val != nodeR -> val ) return false ;

            qLeft.push ( nodeL -> left ) ;
            qLeft.push ( nodeL -> right ) ;
            qRight.push ( nodeR -> right ) ;
            qRight.push ( nodeR -> left ) ;
        }

        return true ;
    }
};
