class Solution {
public:
    void solve(TreeNode* root, int &depth, int temp){
        if(root == NULL){
            depth = max(depth, temp);
            return;
        }
        solve(root->left, depth, temp+1);
        solve(root->right, depth, temp+1);
    }

    int maxDepth(TreeNode* root) {
        int depth = 0, temp = 0;
        solve(root,depth,temp);
        return depth;
    }
};
