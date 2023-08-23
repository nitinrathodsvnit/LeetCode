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
    void f(TreeNode* root, map<int, map<int, multiset<int>>>& mpp, int v=0, int i=0){
        if(root==nullptr)   return ;
        f(root->left, mpp, v+1, i-1);
        mpp[i][v].insert(root->val);
        f(root->right, mpp, v+1, i+1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int, multiset<int>>> mp;
        f(root, mp, 0, 0);
        vector<vector<int>> ans;
        for(auto p: mp){
            vector<int> tm;
            for(auto q: p.second){
                tm.insert(tm.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(tm);
        }
        return ans;
    }
};