class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans;
        if(n%2 == 0) ans = 0;
        else ans = 1;

        for(int i = 1; i < 32; i++){
            n = n >> 1;
            if(n%2 != 0){
                ans = ans << 1;
                ans += 1;
            }
            else{
                ans = ans << 1;
            }
        }
        return ans;
    }
};
