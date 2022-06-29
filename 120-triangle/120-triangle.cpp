class Solution {
public:
    int f(int i, int j, vector<vector<int>>& a, int n , vector<vector<int>>& dp){
        if(i==n-1)  return a[i][j]; 
        if(dp[i][j]!=-1)    return dp[i][j];
        int up = f(i+1, j+1, a, n, dp) + a[i][j];
        int lf = f(i+1, j, a, n, dp) + a[i][j];
        return dp[i][j] = min(lf, up);
    } 
    
    int minimumTotal(vector<vector<int>>& a) {
        int n = a.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        return f(0, 0, a, n, dp);
    }
};