// Last updated: 7/28/2026, 9:58:55 PM

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int length=0;
        ListNode* tail=NULL;
        ListNode* tem=head;
        if(head==NULL || head->next==NULL) return head;
        while(tem!=NULL){
            if(tem->next==NULL)tail=tem;
            length++;
            tem=tem->next;
          
        }
        
        if(k==0) return head;
        k=k%length;
        tem=head;
        for(int i=1;i<(length-k);i++){
               tem=tem->next;
        }
        tail->next=head;
        head=tem->next;
        tem->next=NULL;
    return head;

    }
};