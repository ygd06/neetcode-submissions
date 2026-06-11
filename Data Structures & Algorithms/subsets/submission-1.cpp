class Solution {
public:
    void generateSubsets(int ind, vector<int>&curr, vector<int>&nums, vector<vector<int>>&result){
        if(ind == nums.size()){
            result.push_back(curr);
            return;
        }
        curr.push_back(nums[ind]);
        generateSubsets(ind+1, curr, nums, result);
        curr.pop_back();
        generateSubsets(ind+1, curr, nums, result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>curr;
        vector<vector<int>>result;
        generateSubsets(0,curr,nums,result);

        return result;
    }
};
