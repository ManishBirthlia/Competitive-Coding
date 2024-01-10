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
    vector<vector<int>>ad;
    void fill(TreeNode* root){
        if(!root) return ;
        if(root->left){
            ad[root->val].push_back(root->left->val);
            ad[root->left->val].push_back(root->val);
        }
        if(root->right){
            ad[root->val].push_back(root->right->val);
            ad[root->right->val].push_back(root->val);
        }
        fill(root->left);
        fill(root->right);
    }
    int amountOfTime(TreeNode* root, int start) {
        ad.assign(1e5+1,{});
        fill(root);
        int ans=0;
        vector<int>vis(1e5+1,0);
        queue<int>q;
        q.push(start);
        q.push(-1);
        while(!q.empty()){
            int x=q.front();
            q.pop();
            if(q.empty()) break;
            else if(x==-1){
                q.push(-1);
                ans++;
            }else{
                vis[x]=1;
                for(auto it:ad[x]) if(!vis[it]) q.push(it);
            }
        }
        return ans;
    }
};