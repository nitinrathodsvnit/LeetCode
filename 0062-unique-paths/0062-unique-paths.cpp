class Solution {
public:
    int f(int i, int j, int m, int n, vector<vector<int>>& dp){
        if(i<0 or j<0)  return 0;
        if(i==0)    return 1;
        if(dp[i][j]!=-1)    return dp[i][j];
        return dp[i][j] = (f(i-1, j, m, n, dp) + f(i, j-1, m, n, dp));
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        // return f(m-1, n-1, m, n, dp);
        dp[0][0]=1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 and j==0)   dp[0][0]=1;
                else{
                    int dw=0, rw=0;
                    if(i>0) dw = dp[i-1][j];
                    if(j>0) rw = dp[i][j-1];
                    dp[i][j] = dw + rw;
                }
            }
        }
        return dp[m-1][n-1];
    }
};