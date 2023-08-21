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
    void f(TreeNode* root, vector<int>& ans){
        if(root==nullptr)   return;
        ans.push_back(root->val);
        f(root->left, ans);
        f(root->right, ans);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr)   return{};
        vector<int> ans;
        // f(root, ans);
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* cur = st.top();
            ans.push_back(cur->val);
            st.pop();
            if(cur->right!=nullptr)  st.push(cur->right);
            if(cur->left!=nullptr)  st.push(cur->left);
        }
        return ans;
    }
};