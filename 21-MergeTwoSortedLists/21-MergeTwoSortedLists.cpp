// Last updated: 7/28/2026, 9:59:17 PM

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
      ListNode*c= new ListNode(100);
      ListNode* tempc= c;
      while(a!=NULL && b!=NULL){
        if(a->val <= b->val){
            tempc->next=a;
            tempc=tempc->next;
            a=a->next;
        }
        else{
            tempc->next=b;
            tempc=tempc->next;
            b=b->next;
        }
      }
      if(a==NULL) tempc->next=b;
      else tempc->next=a;
      return c->next;
    }
};