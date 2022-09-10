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
    ListNode* reverseList(ListNode* head) {
        ListNode *NewTip = NULL;
        while(head != NULL){
            ListNode *next = head->next;
            head -> next = NewTip;
            NewTip = head;
            head = next;
        }
        
        return NewTip;
    }
};