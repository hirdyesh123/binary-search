// Last updated: 8/8/2026, 12:13:20 AM
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
15    int temp;
16    void helper(TreeNode* root){
17        if(root==NULL) return ;
18        pq.push(root->val);
19        helper(root->left);
20       
21        helper(root->right);
22    }
23    int kthSmallest(TreeNode* root, int k) {
24        temp=k;
25        int ans=0;
26        helper(root);
27        while(!pq.empty() && k>0){
28             ans=pq.top();
29            pq.pop();k--;
30        }
31        return ans;
32    }
33};