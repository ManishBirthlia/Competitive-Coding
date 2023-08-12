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
    vector<vector<int>> levelOrderBottom(TreeNode* root){
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>>ans;
        vector<int>c;
        while(!q.empty()){
            TreeNode* temp =q.front();
            q.pop();
            if(q.empty()) break;
            if(temp){
                c.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }else{
                if(c.size()){
                    ans.push_back(c);
                    c.clear();
                }
                q.push(temp);
            }
        }
        if(c.size()) ans.push_back(c);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};