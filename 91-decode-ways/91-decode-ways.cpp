class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);    // ways ending in the ith index (1-indexed)
        dp[0] = 1;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != '0')
                dp[i + 1] += dp[i];
            if (i >= 1 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '0' && s[i] <= '6')))
                dp[i + 1] += dp[i - 1];
        }
        return dp[n];
    }
};