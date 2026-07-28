// Last updated: 7/28/2026, 9:58:07 PM

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                flag=true;
                break;
            }
        }
       if(flag==false) return NULL;
       else{
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return temp;
       }
    }
};