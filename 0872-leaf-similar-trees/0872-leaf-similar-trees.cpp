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
    vector<int> a,b;
    void dfs(TreeNode* root,vector<int>&c){
        if(!root) return ;
        if(!root->left && !root->right) c.push_back(root->val);
        dfs(root->left,c);
        dfs(root->right,c);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2){
        dfs(root1,a);
        dfs(root2,b);
        return a==b;
    }
};