class Solution {
public:

    void permutations(vector<int>& curr,
                      vector<int>& nums,
                      vector<bool>& used,
                      vector<vector<int>>& result){

        if(curr.size() == nums.size()){
            result.push_back(curr);
            return;
        }

        for(int i = 0; i < nums.size(); i++){

            if(used[i]) continue;

            used[i] = true;
            curr.push_back(nums[i]);

            permutations(curr, nums, used, result);

            curr.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<int> curr;
        vector<vector<int>> result;

        vector<bool> used(nums.size(), false);

        permutations(curr, nums, used, result);

        return result;
    }
};