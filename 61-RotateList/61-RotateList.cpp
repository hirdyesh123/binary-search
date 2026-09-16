// Last updated: 9/16/2026, 10:06:47 AM
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
13    ListNode* insertGreatestCommonDivisors(ListNode* head) {
14        if(head==NULL) return head;
15        auto temp=head;
16        while( temp!=NULL && temp->next!=NULL ){
17            int x=temp->val;
18            int y=temp->next->val;
19            int hcf=(int)gcd(x,y);
20            ListNode* hirdyesh= new ListNode(hcf);
21            hirdyesh->next=temp->next;
22            temp->next=hirdyesh;
23            temp=temp->next->next;
24        }
25        return head;
26    }
27};