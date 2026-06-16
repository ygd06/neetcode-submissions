class Solution {
public:
bool balanced = true;
    int solve(TreeNode * root){
        if(root == NULL) return 0;
        if(balanced == false) return -1;
        
        int left = solve(root->left);

        int right = solve(root->right);

        if(abs(left - right) > 1) balanced = false;

        return 1 + max(left, right);

    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        return balanced;
    }
};
