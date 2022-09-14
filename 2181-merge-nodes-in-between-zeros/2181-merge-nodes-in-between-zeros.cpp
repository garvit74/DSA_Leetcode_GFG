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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* s;
        ListNode* f;
        s = head;
        f = head->next;
        int sum = 0;
        while(f != NULL){
            if(f->val == 0){
                s -> val = sum;
                s -> next = f;
                if(f->next == NULL){
                    s->next = NULL;
                }
                s = f;
                f = f->next;
                sum = 0;
            }
            else{
                sum = sum + f->val;
                f = f->next;
            }
        }
        return head;
    }
};