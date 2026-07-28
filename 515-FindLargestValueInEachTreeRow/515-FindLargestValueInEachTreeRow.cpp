// Last updated: 7/28/2026, 9:57:03 PM
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
    int lvl(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(lvl(root->left),lvl(root->right));
    }
    void helper(TreeNode*root,vector<int>&nums,int current){
        if(root==NULL) return;
        nums[current]=max(nums[current],root->val);
        helper(root->left,nums,current+1);
        helper(root->right,nums,current+1);
    }
    vector<int> largestValues(TreeNode* root) {
        int level=lvl(root);
        vector<int>ans(level,INT_MIN);
        helper(root,ans,0);


        return ans;
    }
};