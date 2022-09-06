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
    TreeNode* fun(TreeNode * root)
    {
        if(!root)return NULL;
        TreeNode * x = fun(root->left);
        TreeNode * y = fun(root->right);
        if(!x and !y and root->val==0)
        {
            return NULL;
        }
        root->left = x;
        root->right = y;
        return root;
            
    }
    TreeNode* pruneTree(TreeNode* root) {
        root = fun(root);
        return root;
    }
};