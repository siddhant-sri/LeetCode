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
    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        
        while(head != NULL){
            ListNode* front = head->next;
            head->next = prev;
            prev = head;
            head = front;
        }
        return prev;
    }
    void mergeLists(ListNode* first, ListNode* second){
        while(second != NULL){
            ListNode* front = first->next;
            ListNode* secondFront = second->next;

            first->next = second;
            first = front;

            second->next = front;
            second = secondFront;
        }
    }
    void reorderList(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        // find mid
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse second half
        ListNode* secondHalfHead = slow->next;
        slow->next = NULL;

        ListNode* reverseSecondHalfHead = reverseLL(secondHalfHead);
        
        // merge the halves
        mergeLists(head, reverseSecondHalfHead);
    }
};