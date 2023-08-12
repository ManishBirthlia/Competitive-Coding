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
    unordered_map<TreeNode*,unordered_map<TreeNode*,int>>dp;
    int dfs(TreeNode* root,TreeNode* nt){
        if(!root) return 0;
        int a=0,b=0;
        if(dp.count(root) && dp[root].count(nt)) return dp[root][nt];
        if(root!=nt) a=root->val + dfs(root->left,root->left) + dfs(root->right,root->right);
        b=dfs(root->left,root) + dfs(root->right,root);
        return dp[root][nt]=max(a,b);
    }
    int rob(TreeNode* root){
        return dfs(root,NULL);
    }
};