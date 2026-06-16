class Solution {
   public:
    void solve(TreeNode* root, int height, vector<vector<int>>& ans) {
        if (root == NULL) return;

        if (height == ans.size()) {
            ans.push_back({});
        }

        ans[height].push_back(root->val);

        solve(root->left, height + 1, ans);
        solve(root->right, height + 1, ans);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        solve(root, 0, ans);
        return ans;
    }
};