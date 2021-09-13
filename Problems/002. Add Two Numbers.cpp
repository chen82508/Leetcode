/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers ( ListNode* l1, ListNode* l2 ) {
        ListNode *dummyNode = new ListNode(0), *currSubject = dummyNode ;

        int carryDigit = 0 ;

        while ( l1 || l2 || carryDigit ) {
            if ( l1 ) {
                carryDigit += l1 -> val ;
                l1 = l1 -> next ;
            }

            if ( l2 ) {
                carryDigit += l2 -> val ;
                l2 = l2 -> next ;
            }

            currSubject -> next = new ListNode ( carryDigit % 10 ) ;
            carryDigit /= 10 ;
            currSubject = currSubject -> next ;
        }

        return dummyNode -> next ;
    }
};
