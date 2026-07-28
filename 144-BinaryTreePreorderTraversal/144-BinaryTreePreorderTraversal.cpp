// Last updated: 7/28/2026, 9:58:06 PM
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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr) return{};
        vector<int>ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            auto x=st.top();
            st.pop();
            int value=x->val;
            ans.push_back(value);
            if(x->right!=NULL) st.push(x->right);
            if(x->left!=NULL) st.push(x->left); 
            
        }
        return ans;
    }
};