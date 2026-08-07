// Last updated: 8/8/2026, 12:10:37 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    priority_queue<int,vector<int>,greater<int>>pq;
15    void helper(TreeNode* root){
16        if(root==NULL) return ;
17        pq.push(root->val);
18        helper(root->left);
19        helper(root->right);
20    }
21    int kthSmallest(TreeNode* root, int k) {
22        int ans=0;
23        helper(root);
24        while(!pq.empty() && k>0){
25             ans=pq.top();
26            pq.pop();k--;
27        }
28        return ans;
29    }
30};