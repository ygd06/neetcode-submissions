class Solution {
public:
    int solve(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&ans){
        if(i < 0 || i > dp.size()-1 || j < 0 || j > dp[0].size()-1 || dp[i][j] == 1) return 0;
        if(i == dp.size()-1 && j == dp[0].size()-1) return 1;
        if(ans[i][j] != 0) return ans[i][j];

        return ans[i][j] = solve(i+1, j, dp, ans) + solve(i, j+1, dp, ans);
    }
    int uniquePathsWithObstacles(vector<vector<int>>&dp) {
        vector<vector<int>>ans(dp.size(), vector<int>(dp[0].size(), 0));
        return solve(0,0,dp,ans);
    }
};
