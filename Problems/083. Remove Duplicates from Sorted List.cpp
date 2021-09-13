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
        if ( !head ) return head ;

        ListNode *CheckDup = head ;

        while ( CheckDup -> next ) {
            if ( CheckDup -> val == CheckDup -> next -> val ) {
                ListNode *ToDelete = CheckDup -> next ;
                CheckDup -> next = ToDelete -> next ;
                delete ToDelete ;
            }
            else CheckDup = CheckDup -> next ;
        }

        return head ;
    }
};
