class Solution {
public:
    int solve(int i, int j, vector<vector<int>>&dp){
        if(i < 0 || i > dp.size()-1 || j < 0 || j > dp[0].size()-1) return 0;
        if(i == dp.size()-1 && j == dp[0].size()-1) return 1;
        if(dp[i][j] != 0) return dp[i][j];

        return dp[i][j] = solve(i+1, j, dp) + solve(i, j+1, dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m, vector<int>(n, 0));
        return solve(0,0,dp);
    }
};
