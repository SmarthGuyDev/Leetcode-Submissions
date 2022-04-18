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
    int ans;
    
    void solve(TreeNode *root, int k, int &count)
    {
        if(!root)
            return;
        
        solve(root->left, k, count);
        
        if(count == k)
        {
            ans = root->val;
            count++;
            return;
        }
        else
            count++;
        solve(root->right, k, count);
     }
    
    int kthSmallest(TreeNode* root, int k) {
        ans = -1;
        int count = 1;
        solve(root, k, count);
        return ans;
    }
};