// Last updated: 7/28/2026, 9:58:30 PM
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
int level(TreeNode * root){
    if(root==NULL) return 0;
    return 1+ max(level(root->right),level(root->left));
}
 void nthlevel(TreeNode* root,int curr, int level,vector<int>&random){
    if(root==NULL) return ;
   
    if(curr==level) {
       random.push_back(root->val);
       return;
    }
    nthlevel(root->left,curr+1,level,random);
    nthlevel(root->right,curr+1,level,random);
  
  }
  void levelorder(TreeNode* root, vector<vector<int>> &ans){
    int n=level(root);
    for(int i=1;i<=n;i++){
         vector<int>v ;
        nthlevel(root,1,i,v);
        ans.push_back(v);
    }
  }


    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
      
        levelorder(root,ans);
        return ans;
    }
};