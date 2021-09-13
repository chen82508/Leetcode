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

    ListNode* deleteDuplicates ( ListNode* head ) {
        ListNode *dummy = new ListNode ( 0 ) ;
        dummy -> next = head ;

        ListNode *pre = dummy, *cur = head ;
        bool bolIsDuplicate = false ;

        while ( cur ) {
            if ( cur -> next && cur -> val == cur -> next -> val ) {
                ListNode *temp = cur -> next ;
                cur -> next = temp -> next ;
                delete temp ;
                bolIsDuplicate = true ;
            }

            else if ( bolIsDuplicate ) {
                pre -> next = cur -> next ;
                delete cur ;
                cur = pre -> next ;
                bolIsDuplicate = false ;
            }

            else {
                pre = cur ;
                cur = cur -> next ;
            }
        }

        head = dummy -> next ;
        delete dummy ;
        return head ;
    }
};
