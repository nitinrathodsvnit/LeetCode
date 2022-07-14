class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderMap;
        for (int i = 0; i < inorder.size(); i++){
        inorderMap[inorder[i]] = i;
        }
        int pIdx = 0;
        return buildTreeRec(preorder, pIdx,
                            inorderMap, 0, inorder.size()-1);
    }
    
    TreeNode* buildTreeRec(vector<int>& preorder, int& pIdx,
                           unordered_map<int, int>& inorderMap, int iLeftIdx, int iRightIdx){
        
        if (iLeftIdx > iRightIdx){
            pIdx--;
            return nullptr;
        }
        
        TreeNode* rootNodePtr = new TreeNode(preorder[pIdx]);
        
        int iRootIdx = inorderMap[preorder[pIdx]];
        pIdx++;
        rootNodePtr->left = buildTreeRec(preorder, pIdx, 
                                         inorderMap, iLeftIdx, iRootIdx-1);
        pIdx++;
        rootNodePtr->right = buildTreeRec(preorder, pIdx,
                                          inorderMap, iRootIdx+1, iRightIdx);
        return rootNodePtr;
    }
};