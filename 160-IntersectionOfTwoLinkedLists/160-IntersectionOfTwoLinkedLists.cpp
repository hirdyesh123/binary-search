// Last updated: 7/28/2026, 9:57:57 PM

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        int sizel1=0;
        int sizel2=0;
        while(temp1!=NULL){
            sizel1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            sizel2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(sizel1>sizel2){
            for(int i=0;i<(sizel1-sizel2);i++){
                temp1=temp1->next;
            }
        }
         if(sizel2>sizel1){
            for(int i=0;i<(sizel2-sizel1);i++){
                temp2=temp2->next;
            }
        }
   while((temp1!=NULL) && (temp2!=NULL)){
       if(temp1==temp2) return temp1;
       temp1=temp1->next;
       temp2=temp2->next;
   }
      return NULL;
    }
};