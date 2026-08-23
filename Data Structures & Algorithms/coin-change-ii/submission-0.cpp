class Solution {
   public:
    int change(int amount, vector<int>& coins) {
        int m = coins.size();

        vector<vector<int>> dp(m + 1, vector<int>(amount + 1, 0));

        for (int i = 0; i <= m; i++) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= amount; j++) {
                dp[i][j] = dp[i - 1][j];

                if (coins[i - 1] <= j) {
                    dp[i][j] += dp[i][j - coins[i - 1]];
                }
            }
        }

        return dp[m][amount];
    }
};