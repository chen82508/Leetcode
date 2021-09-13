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

    ListNode* mergeTwoLists ( ListNode* l1, ListNode* l2 ) {
        ListNode *l3 = new ListNode ( -1 ) ;
        ListNode *t3 = l3 ;

        while ( l1 && l2 ) {
            if ( l1 -> val <= l2 -> val ) {
                t3 -> next = l1 ;
                l1 = l1 -> next ;
            }
            else {
                t3 -> next = l2 ;
                l2 = l2 -> next ;
            }

            t3 = t3 -> next ;
            t3 -> next = NULL ;
        }

        t3 -> next = l1 ? l1 : l2 ;
        ListNode* temp = l3 ;
        l3 = l3 -> next ;

        delete temp ;

        return l3 ;
    }
};
