// Last updated: 9/17/2026, 1:47:43 PM
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14        unordered_set<int>s;
15        for(int i=0;i<nums.size();i++){
16            s.insert(nums[i]);
17        }
18        auto dummy=new ListNode(-1);
19        auto temp=dummy;
20       
21        while(head!=NULL){
22           if(s.find(head->val)==s.end()){
23              temp->next=head;
24              temp=temp->next;
25           }
26            head=head->next;
27        }
28        temp->next=nullptr;
29        return dummy->next;
30    }
31};