class Solution {
private:
    bool isSafe(int row, int col, int n, vector<string>& board) {
       
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') return false;
        }

       
        int r = row, c = col;
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q') return false;
            r--;
            c--;
        }

        r = row; c = col;
        while (r >= 0 && c < n) {
            if (board[r][c] == 'Q') return false;
            r--;
            c++;
        }

        return true;
    }

    void solve(int row, int n, vector<string>& board, vector<vector<string>>& result) {

        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            
            if (isSafe(row, col, n, board)) {
                
                board[row][col] = 'Q';

                solve(row + 1, n, board, result);

                board[row][col] = '.';
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> board(n, string(n, '.'));
        
        solve(0, n, board, result);
        
        return result;
    }
};