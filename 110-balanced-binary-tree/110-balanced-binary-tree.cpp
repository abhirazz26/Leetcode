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
    bool ans = true;
    int height(TreeNode* root)
    {
        if(!root)
            return 0;
        int l = height(root->left);
        int r = height(root->right);
        if(abs(l-r)>1)
            ans = false;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return ans;
    }
};