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
    priority_queue<int>pq;
    void dfs(TreeNode* root){
        if(!root) return;
        pq.push(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    int getMinimumDifference(TreeNode* root){
        dfs(root);
        int ans=INT_MAX,t=pq.top();
        pq.pop();
        while(!pq.empty()){
            ans=min(ans,abs(t-pq.top()));
            t=pq.top();
            pq.pop();
        }
        return ans;
    }
};