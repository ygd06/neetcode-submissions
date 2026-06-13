class Solution {
public:
    void solve(int index, string &temp, string &digits, vector<string>&mapping, vector<string>&result){
        if(index == digits.size()){
           result.push_back(temp);
           return;
        }

        for(int i = 0; i < mapping[digits[index] - '0'].size(); i++){
            temp.push_back(mapping[(digits[index]-'0')][i]);
            solve(index+1, temp, digits, mapping, result);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>result;
        string temp;
        vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.empty()) return result;
        solve(0, temp, digits, mapping, result);
        return result;
    }
};
