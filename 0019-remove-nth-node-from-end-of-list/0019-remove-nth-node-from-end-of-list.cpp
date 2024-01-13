/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // fast pointer to point at nth node of LL
        ListNode* fast = head;
        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        // if asking to delete head
        if(fast == NULL){
            ListNode* delNode = head;
            head = head->next;
            delete(delNode);
            return head;
        }

        // implement slow pointer and move fast and slow by one step
        ListNode* slow = head;
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        // fast is at last node then slow point to prev of deletion node
        // link to the next node and delete
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete(delNode);

        return head;
    }
};