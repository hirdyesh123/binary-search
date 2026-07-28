// Last updated: 7/28/2026, 9:59:29 PM

class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* temp1=l1;
       ListNode* temp2=l2;
       int carry=0;
       ListNode* dummy= new ListNode(0);
       ListNode* temp3= dummy;
       while(temp1!=NULL || temp2!=NULL){
        int sum=0;
          if(temp1!=NULL && temp2!=NULL)  sum= temp1->val+temp2->val+carry;
          else if(temp1!=NULL) sum=temp1->val+carry;
           else sum= temp2->val+carry;
           int dig= sum%10;
           ListNode* node= new ListNode(dig);
           dummy->next=node;
            if(sum<=9){
                carry=0;
            }
            else{
               carry=sum/10;
            }
           dummy=dummy->next;
          if(temp1!=nullptr) temp1=temp1->next;
           if(temp2!=nullptr)temp2=temp2->next;
       }
       if(carry!=0) {
        dummy->next= new  ListNode(carry);
       }
       return  temp3->next;
    }
};