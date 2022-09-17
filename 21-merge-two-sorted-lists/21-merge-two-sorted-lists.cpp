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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        ListNode* Dummy = new ListNode();
        ListNode* DDummy = Dummy;
        Dummy->next = NULL;
        
        if(l1->val <= l2->val){
            DDummy = l1;
            l1 = l1->next;
            Dummy->next = DDummy;
        }else{
            DDummy = l2;
            l2 = l2->next;
            Dummy -> next = DDummy;
        }
        while(l1!=NULL && l2!=NULL){
            if(l1->val <= l2->val){
                DDummy -> next = l1;
                l1 = l1->next;
            }else{
                DDummy -> next = l2;
                l2=l2->next;
            }
            DDummy = DDummy -> next;
        }
        if(l1)
            DDummy->next = l1;
        if(l2)
            DDummy->next = l2;
        return Dummy->next;
    }
};