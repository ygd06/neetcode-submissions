class Solution {
private:
    bool dfs(int r, int c, int index, string& word, vector<vector<char>>& board) {

        if (index == word.size()) return true;

        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != word[index]) {
            return false;
        }

        char originalChar = board[r][c];
        board[r][c] = '#';

        
        bool wordFound = dfs(r + 1, c, index + 1, word, board) ||
                         dfs(r - 1, c, index + 1, word, board) ||
                         dfs(r, c + 1, index + 1, word, board) ||
                         dfs(r, c - 1, index + 1, word, board);

        board[r][c] = originalChar;

        return wordFound;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
              
                if (board[i][j] == word[0]) {
                    if (dfs(i, j, 0, word, board)) {
                        return true; 
                    }
                }
            }
        }
        return false;
    }
};