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
    
    vector<pair<TreeNode*, TreeNode*>> res;
    TreeNode* prev = NULL;
    void recoverTree(TreeNode* root) {
    
        dfs(root);
        
        if(res.size() == 1)
            swap(res[0].first->val, res[0].second->val);
        else
            swap(res[0].first->val, res[1].second->val);
        
    }
    
    void dfs(TreeNode* root)
    {
        if(!root)
            return;
        
        dfs(root->left);
        if(prev && prev->val > root->val)
            res.push_back({prev,root});
        prev = root;
        dfs(root->right);
    }
    
    
    
};