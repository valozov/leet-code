class Solution {
    int resmax = 0;
    int resmin = 0;
    int temp = 0;

public:
    int isBalanced(TreeNode* root) {
        return dfs(root).first;        
    }

private:
    pair<bool, int> dfs(TreeNode* root) {
        if(!root) {
            return {true, 0};
        }
        
        auto [lb, lh] = dfs(root->left);
        auto [rb, rh] = dfs(root->right);

        bool isb = lb && rb && abs(lh - rh) <=1;

        return {isb, 1 + max(lh, rh)};
    }    
};