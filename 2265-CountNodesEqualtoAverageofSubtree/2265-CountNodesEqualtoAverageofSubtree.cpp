// Last updated: 9/10/2026, 10:12:04 AM
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
14    int counter=0;
15    pair<int,int> helper(TreeNode* root){
16        if(root==NULL){
17            return {0,0};  //number of nodes,sum
18        }
19       if(root->left==NULL && root->right==NULL){
20           counter++;
21          return {1,root->val};
22       }
23        auto left=helper(root->left);
24        auto right=helper(root->right);
25        int totalsum=left.second+right.second+root->val;
26        int totalnodes=left.first+right.first+1;
27        if((totalsum/totalnodes)==root->val) counter++;
28        return {totalnodes,totalsum};
29    }
30    int averageOfSubtree(TreeNode* root) {
31        auto temp=helper(root);
32
33        return counter;
34    }
35};