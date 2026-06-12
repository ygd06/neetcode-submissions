class Solution {
public:
    void solve(int n, int open, int close, string& temp, vector<string>& result){
     
        if(open == n){
            int bracketsAdded = 0;
            for(int i = close; i < n; i++) {
                temp += ')';
                bracketsAdded++;
            }
            
            result.push_back(temp);
            
            while(bracketsAdded--) {
                temp.pop_back();
            }
            return;
        }

      
        if(close > open) return;

        temp.push_back('(');
        solve(n, open + 1, close, temp, result); 
        temp.pop_back(); 
        temp.push_back(')');
        solve(n, open, close + 1, temp, result); 
        temp.pop_back(); 
    }

    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string> result;
        solve(n, 0, 0, temp, result);
        return result;
    }
};