class Solution {
public:
    bool isPalindrome(int i, int j, string &s){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(int index, string &s, vector<string>&curr, vector<vector<string>>&result){
        if(index == s.size()){
            result.push_back(curr);
            return;
        }
        for(int i = index; i < s.size(); i++){
            string temp = s.substr(index, i-index+1);
            if(isPalindrome(index, i, s)){
                curr.push_back(temp);
                solve(i+1,s,curr,result);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        vector<vector<string>>result;
        solve(0,s,curr,result);
        return result;
    }
};
