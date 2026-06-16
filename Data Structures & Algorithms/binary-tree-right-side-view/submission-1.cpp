class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        vector<vector<int>>res;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int level = q.size();
            for(int i = 0; i < level; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(i == level-1)ans.push_back(curr->val);
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);

            }
        }
        return ans;
    }
};
