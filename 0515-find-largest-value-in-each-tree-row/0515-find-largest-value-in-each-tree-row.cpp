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
    vector<int> largestValues(TreeNode* root,int maxi=INT_MIN) {
        queue<TreeNode*>q;
        if(!root) return {};
        vector<int>ans;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(!it){
                ans.push_back(maxi);
                maxi=INT_MIN;
                if(q.empty()) break;
                q.push(it);
            }else{
                maxi=max(maxi,it->val);
                if(it->right) q.push(it->right);
                if(it->left) q.push(it->left);
            }
        }
        return ans;
    }
};