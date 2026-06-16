class Solution {
public:
    void solve(TreeNode* root, int height, unordered_map<int,vector<int>>&ans){
        if(root == NULL) return;
        ans[height].push_back(root->val);
        solve(root->left, height+1,ans);
        solve(root->right, height+1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mpp;
        if(root == NULL) return ans;
        solve(root,0,mpp);
        for(auto i : mpp){
            ans.push_back(i.second);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
