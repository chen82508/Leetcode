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
        if ( !head || !head -> next ) return head ;

        ListNode* lnCur = head ;
        head = reverseList ( lnCur -> next ) ;
        lnCur -> next -> next = lnCur ;
        lnCur -> next = NULL ;

        return head ;
    }
};
