class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,1);
        ans[0] = 0;
        if(n == 0) return ans;
        ans[1] = 1;
        if(n == 1) return ans;
        ans[2] = 1;
        if(n == 2) return ans;
        ans[3] = 2;
        if(n == 3) return ans;
        int prev = 4;
        for(int i = 4; i <= n; i++){
            if((i & (i-1)) == 0) prev = i;
            else{
                ans[i] = ans[i-prev] + 1;
            }

        }
        return ans;
    }
};
