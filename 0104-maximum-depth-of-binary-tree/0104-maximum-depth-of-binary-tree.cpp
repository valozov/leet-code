/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxD = 0;
    int tempD = 0;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        auto pnt = root;
        
        ++tempD;
        maxDepth(pnt->left);
        maxD = max(maxD, tempD);
        maxDepth(pnt->right);
        maxD = max(maxD, tempD);
        --tempD;
        if(pnt == root) return maxD;
        return 0;
    }
};