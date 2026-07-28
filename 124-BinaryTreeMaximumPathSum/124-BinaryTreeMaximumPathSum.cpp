// Last updated: 7/28/2026, 9:58:17 PM

class Solution {
public:
   int maxsum=INT_MIN;
    int helper(TreeNode* root){
        if(root==nullptr) return 0;
        int left=max(0,helper(root->left));
        int right=max(0,helper(root->right));
        maxsum=max(maxsum,left+right+root->val);
        return root->val+ max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxsum;
    }
};