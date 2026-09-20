// Last updated: 9/20/2026, 10:31:58 PM
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
11/**
12 * Definition for a binary tree node.
13 * struct TreeNode {
14 *     int val;
15 *     TreeNode *left;
16 *     TreeNode *right;
17 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
18 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
19 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
20 * };
21 */
22class Solution {
23public:
24    vector<int>nums;
25    void hirdyesh(ListNode* head){
26        auto temp=head;
27        while(temp!=NULL){
28            nums.push_back(temp->val);
29            temp=temp->next;
30        }
31    }
32    TreeNode* tanvika(int low,int high){
33        if(low==high){
34            auto x=new TreeNode(nums[low]);
35            return x;
36        }
37        if(low>high) return NULL;
38        int mid=(low+high)/2;
39        TreeNode* temp=new TreeNode(nums[mid]);
40        temp->left=tanvika(low,mid-1);
41        temp->right=tanvika(mid+1,high);
42        return temp;
43    }
44    TreeNode* sortedListToBST(ListNode* head) {
45        hirdyesh(head);
46        return tanvika(0,nums.size()-1);
47    }
48};