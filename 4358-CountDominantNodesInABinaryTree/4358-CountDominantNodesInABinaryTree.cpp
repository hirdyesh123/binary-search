// Last updated: 7/28/2026, 9:54:27 PM
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
    int ans=0;
    int helper(TreeNode*root){
        if(root==NULL) return 0;
        int left=helper(root->left);
        int right=helper(root->right);

        if(max(left,right)<=root->val) {
            ans++;
            return root->val;
        }
        return max(left,right);
        
    }
    int countDominantNodes(TreeNode* root) {
        helper(root);
        return ans;
    }
};