// Last updated: 7/28/2026, 9:58:37 PM
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL) return head;
        if(head->next == NULL) return head;

        ListNode* dummysmall = new ListNode(-101);
        ListNode* dummybig  = new ListNode(-101);  

        ListNode* temp = head;
        ListNode* connect1 = NULL;
        ListNode* connect2 = NULL;

        while(temp != nullptr){
            if(temp->val >= x){ 
                if(connect2 == NULL) connect2 = temp;
                dummybig->next = temp;
                dummybig = dummybig->next;
            }
            else{ 
                if(connect1 == NULL) connect1 = temp;
                dummysmall->next = temp;
                dummysmall = dummysmall->next;
            }
            temp = temp->next;
        }

        dummysmall->next = connect2;
        dummybig->next = NULL;

        // ✅ FINAL FIX
        return (connect1 != NULL) ? connect1 : connect2;
    }
};
