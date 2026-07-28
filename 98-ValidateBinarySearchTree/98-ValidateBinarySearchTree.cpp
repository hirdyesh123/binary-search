// Last updated: 7/28/2026, 9:58:34 PM
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
  void preorder(TreeNode* root,vector<int>& random){
      if(root==NULL) return;
      preorder(root->left,random);
      random.push_back(root->val);
      preorder(root->right,random);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        vector<int>random;
        preorder(root,random);
        bool flag=false;
        int size= random.size();
        for(int i=0;i<size-1;i++){
          if ( random[i]<random[i+1]) flag=true;
          else {
            flag=false;
            break;
          }
        }
        if(flag==true) return true;
        else return false;
    }
};