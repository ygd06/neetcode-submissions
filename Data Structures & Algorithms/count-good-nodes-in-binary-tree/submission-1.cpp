class Solution {
public:
    void solve(TreeNode* root, int &ansNodes, int maxi){
        if(root == NULL) return;
        if(root->val >= maxi) ansNodes++;
        maxi = max(root->val, maxi);
        solve(root->left, ansNodes, maxi);
        solve(root->right, ansNodes, maxi);
    }
    int goodNodes(TreeNode* root) {
        int ansNodes = 0;
        int maxi = root->val;
        solve(root, ansNodes, maxi);
        return ansNodes;
    }
};
