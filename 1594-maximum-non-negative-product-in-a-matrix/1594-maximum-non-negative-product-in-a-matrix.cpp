class Solution
{
    public:
        int maxProductPath(vector<vector < int>> &g)
        {
            auto r = g.size(), c = g[0].size();
            vector<vector<pair<long, long>>> dp(r, vector<pair<long, long>> (c));
            for (auto i = 0; i < r; ++i)
            {
                for (auto j = 0; j < c; ++j)
                {
                    if (i == 0 && j == 0)
                        dp[0][0].first = dp[0][0].second = g[0][0];
                    else
                    {
                        auto &up = i > 0 ? dp[i - 1][j] : dp[i][j - 1];
                        auto &left = j > 0 ? dp[i][j - 1] : dp[i - 1][j];
                        auto first = max(up.first, left.first), second = min(up.second, left.second);
                        if (g[i][j] < 0)
                            swap(first, second);
                        dp[i][j].first = first *g[i][j];
                        dp[i][j].second = second *g[i][j];
                    }
                }
            }
            return dp[r - 1][c - 1].first < 0 ? -1 : dp[r - 1][c - 1].first % 1000000007;
        }
};