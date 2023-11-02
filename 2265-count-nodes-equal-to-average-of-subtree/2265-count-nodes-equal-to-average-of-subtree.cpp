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
    int ans=0;
    pair<int,int> dfs(TreeNode*root){
        if(!root) return {0,0};
        auto left=dfs(root->left);
        auto right=dfs(root->right);
        if(left.second+right.second==0 || (left.first+right.first+root->val)/(left.second+right.second+1)==root->val) ans++;
        return {left.first+right.first+root->val,left.second+right.second+1};
    }
    int averageOfSubtree(TreeNode* root) {
        auto it=dfs(root);
        return ans;
    }
};