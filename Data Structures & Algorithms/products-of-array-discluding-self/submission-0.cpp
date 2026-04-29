class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int>back(n,1);
        vector<int>front(n,1);

        for(int i = n-2; i >= 0; i--){
            back[i] = back[i+1] * nums[i+1];
        }

        for(int i = 1; i <= n-1; i++){
            front[i] = front[i-1] * nums[i-1];
        }

        for(int i = 0; i < n; i++){
           nums[i] = front[i] * back[i];
        }

        return nums;
    }
};
