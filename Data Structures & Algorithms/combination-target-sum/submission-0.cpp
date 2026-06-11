class Solution {
public:
    void generateCombinations(int ind, int target, vector<int>&curr, vector<int>&nums, vector<vector<int>>&result){
        if(target == 0){
            result.push_back(curr);
            return;
        }
        if(ind == nums.size() || target < 0){
            return;
        }
        curr.push_back(nums[ind]);
        generateCombinations(ind, target-nums[ind], curr, nums, result);
        curr.pop_back();
        generateCombinations(ind+1, target, curr, nums, result);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>curr;
        vector<vector<int>>result;
        generateCombinations(0,target,curr,nums,result);
        return result;
    }
};