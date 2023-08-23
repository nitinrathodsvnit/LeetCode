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
        bool isSame(TreeNode* f, TreeNode* s){
        if(!s and !f)   return true;
        else if(!s or !f)   return false;
        
        if(f->val!=s->val)  return false;
        
        return isSame(s->left, f->right) and isSame(s->right, f->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        return isSame(root->right, root->left);
    }
};