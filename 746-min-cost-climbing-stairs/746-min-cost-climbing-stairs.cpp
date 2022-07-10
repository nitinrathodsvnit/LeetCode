class Solution {
public:
    // int f(vector<int> a, int i, vector<int>&dp){
    //     if(i<=1)    return dp[i] = a[i];
    //     if(dp[i]!=-1)   return dp[i];
    //     int pick =  f(a, i-1, dp);
    //     int nonpick = f(a, i-2, dp);
    //     return dp[i] = a[i] + min(pick, nonpick);
    // }
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n = cost.size();
    //     vector<int> dp(n+1, -1);
    //     return min(f(cost, n-1, dp), f(cost, n-2, dp));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int prev = 0, sec_prev = 0; 
        for (int i = 2; i <= n; i++) {
            int jumpOneStep = prev + cost[i - 1];  
            int jumpTwoStep = sec_prev + cost[i - 2]; 
            sec_prev = prev;
            prev = min(jumpOneStep, jumpTwoStep);
            
        }
        return prev;
    }
};