// Last updated: 8/7/2026, 11:07:48 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* helper(TreeNode* root,TreeNode* p,TreeNode*q){
14        if(root==NULL) return NULL;
15        if(root==p || root==q) return root;
16        TreeNode* left=helper(root->left,p,q);
17        TreeNode* right=helper(root->right,p,q);
18        if(left!=NULL && right!=NULL) return root;
19        if(left!=NULL) return left;
20        return right;
21    }
22    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
23        return helper(root,p,q);
24    }
25};