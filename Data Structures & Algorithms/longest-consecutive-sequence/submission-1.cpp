class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int>mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        for(auto i : nums){
            int num = i+1;
            int count = 1;
            while(mpp[num] != 0){
                num++;
                count++;
            }
            ans = max(ans,count);
        }

        return ans;
        
    }
};
