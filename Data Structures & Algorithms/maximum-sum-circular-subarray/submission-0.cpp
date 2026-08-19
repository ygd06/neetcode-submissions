class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        vector<int>temp = nums;
        for(int i = 0; i< n-1; i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j <= temp.size()-n+i; j++){
                sum += temp[j];
                ans = max(sum, ans);
            }
        }
        return ans;
    }
};