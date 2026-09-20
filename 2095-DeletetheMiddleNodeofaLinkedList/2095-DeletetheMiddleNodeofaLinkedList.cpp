// Last updated: 9/20/2026, 9:39:37 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head==NULL || head->next==NULL ) return NULL;
15        ListNode* slow=head;
16        ListNode* fast=head->next;
17        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
18            slow=slow->next;
19            fast=fast->next->next;
20        }
21        slow->next=slow->next->next;
22        return head;
23    }
24};