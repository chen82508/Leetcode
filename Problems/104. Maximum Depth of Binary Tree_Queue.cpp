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

    int maxDepth ( TreeNode* root ) {
        if ( !root ) return 0 ;

        int iResult = 0 ;
        queue<TreeNode*> q ;
        q.push ( root ) ;

        while ( !q.empty() ) {
            ++ iResult ;
            int iQSize = q.size() ;

            for ( int index = 0 ; index < iQSize ; index ++ ) {
                TreeNode* temp = q.front() ;
                q.pop() ;
                if ( temp -> left ) q.push ( temp -> left ) ;
                if ( temp -> right ) q.push ( temp -> right ) ;
            }
        }

        return iResult ;
    }
};
