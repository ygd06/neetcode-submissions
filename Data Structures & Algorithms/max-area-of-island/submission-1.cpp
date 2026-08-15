class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid,vector<vector<bool>>& visited) {

    if(i < 0 || i >= grid.size() ||
       j < 0 || j >= grid[0].size() ||
       visited[i][j] || grid[i][j] != 1) {
        return 0;
    }

    visited[i][j] = true;

    int area = 1;

    area += solve(i, j + 1, grid, visited);
    area += solve(i + 1, j, grid, visited);
    area += solve(i, j - 1, grid, visited);
    area += solve(i - 1, j, grid, visited);

    return area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;

        vector<vector<bool>>visited(m, vector<bool>(n, false));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    int temp = solve(i, j, grid, visited);
                    ans = max(ans, temp);
                }
            }
        }
        return ans;
    }
};
