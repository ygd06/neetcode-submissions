class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }
        for (auto i : nums) {
            if(mpp[i-1] == 0){
            int num = i;
            int count = 1;
            while (mpp[num+1] != 0) {
                num++;
                count++;
            }
            ans = max(ans, count);
        }
    }

        return ans;
    }
};
