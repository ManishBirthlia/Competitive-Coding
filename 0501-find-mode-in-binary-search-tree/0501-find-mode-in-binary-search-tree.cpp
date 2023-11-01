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
    vector<int> findMode(TreeNode* root,int maxi=INT_MIN) {
        unordered_map<int,int>mp;
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            mp[it->val]++;
            if(it->left) q.push(it->left);
            if(it->right) q.push(it->right);
        }
        for(auto it:mp) maxi=max(maxi,it.second);
        for(auto it:mp) if(it.second==maxi) ans.push_back(it.first);
        return ans;
    }
};