// Last updated: 7/28/2026, 9:57:00 PM
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
   
    int height(TreeNode* node){
        if(node==NULL) return 0;
        return 1+max(height(node->left),height(node->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int diameter= height(root->left)+height(root->right);
         return max(diameter,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};