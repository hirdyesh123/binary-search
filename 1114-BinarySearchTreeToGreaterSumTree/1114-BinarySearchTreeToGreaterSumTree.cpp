// Last updated: 7/28/2026, 9:56:07 PM
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
 void inorder(TreeNode* root,vector<int>&random){
    if(root==NULL) return;
    inorder(root->left,random);
    random.push_back(root->val);
    inorder(root->right,random);
     }

    int element(TreeNode* temp, vector<int>&random, vector<int>&random1){
          for(int i=0;i<random.size();i++){
            if(temp->val==random[i] ) {
                return random1[i];
            }
          }
          return 0;
    }
 
  TreeNode* change(TreeNode* root,vector<int>&random,vector<int>&random1){
    if(root==NULL) return NULL;
    change(root->left,random,random1);
    int x=element(root,random,random1);
    root->val=x;
    change(root->right,random,random1);
    return root;
  }

    TreeNode* bstToGst(TreeNode* root) {
        vector<int>random;
        inorder(root,random);
        int size=random.size();
        vector<int>random1(size);
        random1[size-1]=random[size-1];
        for(int i=size-2;i>=0;i--){
            random1[i]=random1[i+1]+random[i];
        }
        TreeNode* x= change(root,random,random1);
        return x;
    }
};