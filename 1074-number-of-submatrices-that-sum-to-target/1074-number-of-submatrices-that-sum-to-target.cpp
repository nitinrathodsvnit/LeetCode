class Solution {
 int ps[101][101];
public:
    int numSubmatrixSumTarget(vector<vector<int>>& M, int target) {
        ios_base::sync_with_stdio(false);
        size_t n{ M.size() }, m{ M[0].size() };
        
        ps[0][0] = M[0][0];
        for (int i = 1; i < n; i++) ps[i][0] = M[i][0] + ps[i-1][0];
        for (int j = 1; j < m; j++) ps[0][j] = M[0][j] + ps[0][j-1];
        
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                ps[i][j] = M[i][j] + ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1];

        
        int count{};
        for (int i0 = 0; i0 < n; i0++)
            for (int j0 = 0; j0 < m; j0++)
                for (int i1 = i0; i1 < n; i1++)
                    for (int j1 = j0; j1 < m; j1++) {
                        int sum{ ps[i1][j1] };

                        if (i0 > 0) sum -= ps[i0 - 1][j1];
                        if (j0 > 0) sum -= ps[i1][j0-1];
                        if (i0 > 0 && j0 > 0) sum += ps[i0 - 1][j0 - 1];

                        if (sum == target) count++;
                    }

        return count;
    }
};