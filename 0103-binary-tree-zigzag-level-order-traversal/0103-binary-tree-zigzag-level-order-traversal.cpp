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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)   return {};
        vector<vector<int>> ans;
        queue<TreeNode*> st;
        st.push(root);
        int j=0;
        while(!st.empty()){
            int n = st.size();
            vector<int> tm;
            for(int i=0; i<n; i++){
                TreeNode* cur = st.front();
                st.pop();
                tm.push_back(cur->val);
                if(cur->left!=nullptr)  st.push(cur->left);
                if(cur->right!=nullptr)  st.push(cur->right);
            }
            if(j&1) reverse(tm.begin(), tm.end()); j++;
            ans.push_back(tm);
        }
        return ans;
    }
};