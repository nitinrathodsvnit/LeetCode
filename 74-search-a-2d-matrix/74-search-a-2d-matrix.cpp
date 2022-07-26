class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int n = a.size(), m= a[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]==target) return true;
            }
        }
        return false;
    }
};