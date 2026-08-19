class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        if(n == 1) return true;
        if(nums[0] == 0) return false;

        for(int i = 0; i < n-1; i++){
            if(i > count) break;
            count = max(count, i + nums[i]);
            if(count >= n-1) return true;
        }
        return false;
    }
};
