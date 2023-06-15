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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int level=1,level_ans=1,sum=0,ans=INT_MIN;
        while(!q.empty()){
            if(!q.front()){
                if(sum>ans){
                    ans=sum;
                    level_ans=level;
                }
                level++;
                sum=0;
                q.pop();
                q.push(NULL);
                if(!q.front() && q.size()==1) return level_ans;
            }
                TreeNode* temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
        }
        return level_ans;
    }
};