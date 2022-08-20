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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) 
            return vector<std::vector<int>>();
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        TreeNode* temp = root;
        q.push(temp);
        while (!q.empty()) {
            vector<int> currentList;
            
            int size = q.size();
            while (size-- > 0) {
                TreeNode* currentNode = q.front();
                currentList.push_back(currentNode->val);
                q.pop();
                
                if (currentNode->left) 
                    q.push(currentNode->left);
                if (currentNode->right) 
                    q.push(currentNode->right);
            }
            
            ans.push_back(currentList);
        }
        return ans;
    }
};