// Last updated: 7/28/2026, 9:58:22 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void helper(TreeNode* root, int targetsum,vector<vector<int>>&ans,vector<int>&v){
    if(root==NULL) return;
     v.push_back(root->val);
    if(root->left==NULL && root->right==NULL){
             if(root->val==targetsum){
                ans.push_back(v);
             
             }
             
       
    }
           else{
    helper(root->left,targetsum-(root->val),ans,v);
    helper(root->right,targetsum-(root->val),ans,v);
           }
           v.pop_back();
       


}
    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(root,targetsum,ans,v);
           return ans;
    }
};