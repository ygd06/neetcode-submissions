class Solution {
public:
    bool solve(TreeNode* root, TreeNode* subRoot){
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;
        if(root->val != subRoot->val) return false;

        bool left = solve(root->left, subRoot->left);
        bool right = solve(root->right, subRoot->right);

        return left && right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans = false;
        if(root == NULL) return false;
        if(root->val == subRoot->val){
            if(solve(root,subRoot)) return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
