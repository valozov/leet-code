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
    bool check = true;
    bool chk(TreeNode* p, TreeNode* q){
        if(!p && !q)
            return check;
        if(!p || !q){
            check = false;
            return false;
            }
        chk(p->left, q->left);
        chk(p->right, q->right);
        check = check * (p->val == q->val);
        return check;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return chk(p, q);
    }
};