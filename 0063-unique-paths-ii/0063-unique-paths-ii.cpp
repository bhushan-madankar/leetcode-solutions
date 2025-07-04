class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n ,0));

        if(grid[0][0] == 1) return 0;
        dp[0][0] = 1;

        for(int i = 0;i<m;i++){
            for(int j = 0 ; j<n;j++){
                if(grid[i][j] == 1) continue;

                if(i>0) dp[i][j] += dp[i-1][j];
                if(j>0) dp[i][j] += dp[i][j-1];
                
            }
        }
        return dp[m-1][n-1];
    }
};