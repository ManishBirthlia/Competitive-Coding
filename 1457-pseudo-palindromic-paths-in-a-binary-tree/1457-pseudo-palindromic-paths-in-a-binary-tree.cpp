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
    int dfs(TreeNode* root,unordered_map<int,int>mp={}){
        if(!root) return 0;
        mp[root->val]++;
        if(!root->left && !root->right){
            int count=0;
            for(auto it:mp) if(it.second%2!=0) count++;
            if(count==0 || count==1) return 1;
            return 0;
        }
        int a,b;
        a=dfs(root->left,mp);
        b=dfs(root->right,mp);
        return a+b;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        return dfs(root);
    }
};