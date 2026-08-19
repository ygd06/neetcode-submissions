class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mpp;
        for(auto c: bills){
            if(c == 5){
                mpp[c]++;
            }
            else if(c == 10){
                mpp[c]++;
                if(mpp[5])
                mpp[c-5]--;
                else return false;
            }
            else{
                if(mpp[10] != 0){
                    mpp[10]--;
                    if(mpp[5] != 0){
                        mpp[5]--;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(mpp[5] >= 3){
                    mpp[5] = mpp[5] - 3;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};