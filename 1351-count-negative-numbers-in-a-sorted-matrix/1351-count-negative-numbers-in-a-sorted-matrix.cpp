class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0, j=0, n=grid.size(), m =grid[0].size();
        for(int i=0; i<n; i++){
            j=0;
            for(j=0; j<m; j++){
                if(grid[i][j]<0) break;
            }
            ans+=(m-j);
        }
        return ans;
    }
};