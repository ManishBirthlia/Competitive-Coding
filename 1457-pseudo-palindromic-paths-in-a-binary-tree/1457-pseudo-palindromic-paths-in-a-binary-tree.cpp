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
    int pseudoPalindromicPaths (TreeNode* root,unordered_map<int,int>mp={}){
        if(!root) return 0;
        mp[root->val]++;
        if(!root->left && !root->right){
            int count=0;
            for(auto it:mp) if(it.second%2!=0) count++;
            return count>1?0:1;
        }
        return pseudoPalindromicPaths(root->left,mp) + pseudoPalindromicPaths(root->right,mp);
    }
};