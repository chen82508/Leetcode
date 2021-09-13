/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public :

    ListNode* reverseList ( ListNode* head ) {
        if ( !head ) return head ;

        ListNode* lnDummy = new ListNode ( -1 ) ;
        ListNode* lnCur = head ;
        lnDummy -> next = head ;

        while ( lnCur -> next ) {
            ListNode* lnTmp = lnCur -> next ;
            lnCur -> next = lnTmp -> next ;
            lnTmp -> next = lnDummy -> next ;
            lnDummy -> next = lnTmp ;
        }

        return lnDummy -> next ;
    }
};
