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
        ListNode* slow = head, *fast = head; 
        ListNode* temp = slow;
        int cnt = 0;
        
        while(fast->next != NULL){
            fast = fast->next;
            ++cnt;
            if(cnt > n-1){
                temp = slow;
                slow = slow->next;
                --cnt;
            }
        }
        if(slow == head)
        {
            head = slow->next;
        }
        else
        {
            temp->next = temp->next->next;
        }
        
        return head;
    }
};