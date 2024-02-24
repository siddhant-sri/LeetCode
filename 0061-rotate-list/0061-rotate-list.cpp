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
    ListNode* findNthNode(ListNode* head, int n){
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            if(cnt == n)    return temp;
            temp = temp->next;
        }
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)    return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        k = k % len;
        if(k == 0)  return head;

        tail->next = head;
        ListNode* lastNode = findNthNode(head, len-k);

        head = lastNode->next;
        lastNode->next = NULL;

        return head;
    }
};