class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j])  ans = max(ans, f(i, j, grid, n, m));
            }
        }
        return ans;
    }
    int f(int i, int j, vector<vector<int>>& a, int n, int m){
        if(i<0 or j<0 or i>=n or j>=m or !a[i][j])  return 0;
        a[i][j] = 0;
        return 1 + f(i, j-1, a, n, m) + f(i-1, j, a, n, m) + f(i+1, j, a, n, m) + f(i, j+1, a, n, m);
    }
};