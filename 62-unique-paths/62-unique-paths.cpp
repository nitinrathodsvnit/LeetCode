class Solution {
public:
    int f(int i, int j, vector<vector<int>> &dp){
        if(i==0 and j==0)   return 1;
        if(i<0 or j<0)    return 0;
        if(dp[i][j]!=-1)    return dp[i][j];
        
        return dp[i][j] = f(i-1, j, dp) + f(i, j-1, dp);
    }
    int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 and j==0) dp[i][j]=1;
                else{
                    int up=0, down=0;
                    if(i>0) up = dp[i-1][j];
                    if(j>0) down = dp[i][j-1];
                    dp[i][j]= up + down;
                }
            }
        }
        return dp[m-1][n-1];
    }
};