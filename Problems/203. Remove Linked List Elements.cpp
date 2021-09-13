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

    ListNode* removeElements ( ListNode* head, int val ) {
        ListNode *lnDummy = new ListNode ( -1 ), *lnPrev = lnDummy ;

        lnDummy -> next = head ;

        while ( lnPrev -> next ) {
            if ( lnPrev -> next -> val == val ) {
                ListNode* lnTemp = lnPrev -> next ;
                lnPrev -> next = lnTemp -> next ;
                lnTemp -> next = NULL ;
                delete lnTemp ;
            }
            else lnPrev = lnPrev -> next ;
        }

        return lnDummy -> next ;
    }
};
