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
    bool isEvenOddTree(TreeNode* root,int level=0) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>v;
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(!it){
                for(int i=1;i<size(v);i++){
                    if(v[i]<=v[i-1] && level%2==0 || v[i]%2==0 && level%2==0) return false;
                    else if(v[i]>=v[i-1] && level%2!=0 || v[i]%2!=0 && level%2!=0) return false;
                }
                if(v[0]%2==0 && level%2==0 || v[0]%2!=0 && level%2!=0) return false;
                v.clear();
                level++;
                if(q.empty()) continue;
                q.push(it);
                continue;
            }
            v.push_back(it->val);
            if(it->left) q.push(it->left);
            if(it->right) q.push(it->right);
        }
        return true;
    }
};