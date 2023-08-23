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
    void f(TreeNode*& root, int val){
        if(root==nullptr){
            root = new TreeNode(val);
            return;
        }
        if(root->val > val) return f(root->left, val);
        return f(root->right, val);
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        f(root, val);
        return root;
    }
};