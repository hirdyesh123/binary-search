// Last updated: 7/28/2026, 9:55:07 PM
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;

        ListNode * dummy= new ListNode(0);
        dummy->next=head;
        ListNode *random=dummy;
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast->next!=NULL && fast->next->next!=NULL){
           
            slow=slow->next;
            fast=fast->next->next;
            random=random->next;
        }
        if(fast->next==NULL) random->next=slow->next;
        else slow->next=slow->next->next;
        
        return dummy->next;
    }
};