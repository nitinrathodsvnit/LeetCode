class Solution {
public:
    int dp[31][1001];
    int mod = 1e9+7;
    int solve(int n, int k, int target) {
        
        // Base case
        
        if(n == 0 and target == 0) {
            return 1;
        }
        
        if(n == 0 and (target > 0 or target < 0)) {
            return 0;
        }
        
        if(n > 0 and target <= 0) {
            return 0;
        } 
        
        if(dp[n][target] != -1) {
            return dp[n][target];
        }
        
        int ans = 0;
        for(int i = 1; i <= k; i++) {
            ans = (ans % mod + solve(n-1, k, target - i) % mod) % mod;
        }
        
        return dp[n][target] = ans;
        
    }
    int numRollsToTarget(int n, int k, int target) {
        
        memset(dp, -1, sizeof(dp));
        return solve(n , k, target);
        
    }
};