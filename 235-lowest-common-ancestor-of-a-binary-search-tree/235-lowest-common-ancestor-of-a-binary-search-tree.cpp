// if both are larger then root go right recursively
// if both are smaller then root go left recursively
// else return the root
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)   return root;
        if(p->val>root->val and q->val>root->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        else if(p->val<root->val and q->val<root->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};