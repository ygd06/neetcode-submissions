class Solution {
public:
    int ans = 0;

    void inorder(TreeNode* root, int k, int &count){
        if(root == NULL) return;

        inorder(root->left, k, count);

        count++; 
        if(count == k){
            ans = root->val;
            return; 
        }

        inorder(root->right, k, count);
        
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        inorder(root, k, count);
        return ans;
    }
};