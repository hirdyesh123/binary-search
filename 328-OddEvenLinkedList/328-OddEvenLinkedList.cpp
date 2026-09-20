// Last updated: 9/20/2026, 9:55:12 PM
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
13    vector<int> v;
14
15    Solution(ListNode* head) {
16        while (head != NULL) {
17            v.push_back(head->val);
18            head = head->next;
19        }
20    }
21
22    int getRandom() {
23        return v[rand() % v.size()];
24    }
25};
26
27/**
28 * Your Solution object will be instantiated and called as such:
29 * Solution* obj = new Solution(head);
30 * int param_1 = obj->getRandom();
31 */