class Solution {
public:
    void solve(int index, vector<int>& curr, vector<int>&nums, vector<vector<int>>&result){
        
        result.push_back(curr);
          
        for(int i = index; i < nums.size(); i++){
            if(i > index && nums[i] == nums[i-1]) continue;
            curr.push_back(nums[i]);
            solve(i+1, curr, nums, result);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>cur;
        vector<vector<int>>result;
        sort(nums.begin(), nums.end());
        solve(0, cur, nums, result);
        return result;
    }
};
