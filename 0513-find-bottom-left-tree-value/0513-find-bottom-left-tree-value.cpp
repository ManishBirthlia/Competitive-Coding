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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        int a=root->val;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(q.empty()) continue;
            if(!it){
                q.push(NULL);
                a=q.front()->val;
                continue;
            }
            if(it->left) q.push(it->left);
            if(it->right) q.push(it->right);
        }
        return a;
    }
};