class Solution {
public:
    void solve(TreeNode* root){
        if(root == NULL){
            return;
        }
        solve(root->left);
        solve(root->right);
        swap(root->left,root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        solve(root);
        return root;
    }
};
