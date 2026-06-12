class Solution {
public:
    void solve(int n, int open, int close, string& temp, vector<string>& result) {
    if (temp.length() == 2 * n) {
        result.push_back(temp);
        return;
    }

    if (open < n) {
        temp.push_back('(');
        solve(n, open + 1, close, temp, result);
        temp.pop_back(); 
    }

    if (close < open) {
        temp.push_back(')');
        solve(n, open, close + 1, temp, result);
        temp.pop_back(); 
    }
}

    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string> result;
        solve(n, 0, 0, temp, result);
        return result;
    }
};