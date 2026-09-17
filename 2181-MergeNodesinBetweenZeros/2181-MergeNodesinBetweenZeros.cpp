// Last updated: 9/17/2026, 2:08:00 PM
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
13    ListNode* mergeNodes(ListNode* head) {
14        auto temp=head->next;
15        int sum=0;
16        auto dummy=new ListNode(-1);
17        auto hirdyesh=dummy;
18        while(temp!=NULL){
19            sum=sum+temp->val;
20            if(temp->val==0){
21                auto tanvika=new ListNode(sum);
22                hirdyesh->next=tanvika;
23                hirdyesh=hirdyesh->next;
24                sum=0;
25            }
26            temp=temp->next;
27        }
28        
29       // temp->next=NULL;
30        return dummy->next;
31    }
32};