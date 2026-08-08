class Solution {
public:
    void solve(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>&visited){

        if(i < 0 || i > grid.size()-1 || j < 0 || j > grid[0].size() - 1 || visited[i][j] || grid[i][j] == '0') return;

         if(grid[i][j] == '1' && visited[i][j] != true){
            visited[i][j] = true;
            solve(i+1, j, grid, visited);
            solve(i, j+1, grid, visited);
            solve(i-1, j, grid, visited);
            solve(i, j-1, grid, visited);
         }
    }
    int numIslands(vector<vector<char>>& grid){
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<bool>>visited(r, vector<bool>(c, false));
        int count = 0;

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(!visited[i][j] && grid[i][j] != '0'){
                solve(i, j, grid, visited);
                count++;
                }
            }
        }

        return count;

    }
};
