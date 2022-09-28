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
        ListNode* curr, *prevcurr, *forw;
        curr=head, prevcurr=head, forw=head;
        while(n and forw!=nullptr){
            forw=forw->next;
            n--;
        }
        if(forw==nullptr){
            return head->next;
        }
        while(forw!=nullptr){
            prevcurr=curr;
            curr=curr->next;
            forw=forw->next;    
        }

        prevcurr->next=curr->next;
        return head;
    }
};