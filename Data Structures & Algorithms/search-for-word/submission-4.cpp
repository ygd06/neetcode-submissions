class Solution {
public:

   bool solve(int left, int right, int index, string &word, vector<vector<char>>&board){
    bool ans = false;
    int m = board.size();
    int n = board[0].size();
    if(index == word.size()) return true;
    if(left < 0 || left >= m || right < 0 || right >= n || board[left][right] != word[index]) return false;
    
    char temp = board[left][right];
    board[left][right] = '#';

    ans = solve(left-1,right,index+1,word,board) || solve(left+1, right, index+1, word, board)
          || solve(left, right-1, index+1, word, board) || solve(left, right+1, index+1, word, board);

    board[left][right] = temp;
    
    return ans;
   }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == word[0]){
                   if (solve(i,j,0,word,board)) return true;
                }
            }
        }
        return false;
    }
};
