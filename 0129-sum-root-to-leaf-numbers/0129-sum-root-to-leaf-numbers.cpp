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
    void helper(TreeNode* root, int &sum,string s){
        if(!root) return ;
        if(!root->left && !root->right){
            s+=to_string(root->val);
            sum+=stoi(s);
            return ;
        }
        s+=to_string(root->val);
        helper(root->left,sum,s);
        helper(root->right,sum,s);
    }
    int sumNumbers(TreeNode* root) {
        string s;
        int sum=0;
        helper(root,sum,s);
        return sum;
    }
};