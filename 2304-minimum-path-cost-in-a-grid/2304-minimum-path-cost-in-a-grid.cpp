    class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        //dp[i][j] -> Min cost such that you start from first row, end up at ith row and jth column
        //dp[i][j] = for all x < n min(dp[i-1][x] + moveCost[grid[i-1][x]][j] + grid[i][j])
        
        int row = grid.size();
        if(row == 0) return 0;
        int col = grid[0].size();
        
        vector<vector<int>> dp(row, vector<int>(col, INT_MAX));
        
        for(int currRow = 0; currRow < row; currRow++)
        {
            for(int currCol = 0; currCol < col; currCol++)
            {
                int prevRow = currRow - 1;
                if(prevRow < 0)
                {
                    dp[currRow][currCol] = grid[currRow][currCol];
                    continue;
                }
                for(int prevRowCol = 0; prevRowCol < col; prevRowCol++)
                {
                    dp[currRow][currCol] = min(dp[currRow][currCol], dp[prevRow][prevRowCol] + moveCost[grid[prevRow][prevRowCol]][currCol] + grid[currRow][currCol]);
                }
            }
        }
        
        int minCost = INT_MAX;
        int lastRow = row - 1;
        for(int currCol = 0; currCol < col; currCol++)
        {
            minCost = min(minCost, dp[lastRow][currCol]);
        }
        return minCost;
    }
};