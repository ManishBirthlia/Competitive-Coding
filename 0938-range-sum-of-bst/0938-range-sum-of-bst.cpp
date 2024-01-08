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
    int rangeSumBST(TreeNode* root, int low, int high) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        stack<TreeNode*>st;
        int ans=0;
        st.push(root);
        while(!st.empty()){
            auto it=st.top();
            st.pop();
            if(it->val<=high && it->val>=low) ans+=it->val;
            if(it->left) st.push(it->left);
            if(it->right) st.push(it->right);
        }
        return ans;
    }
};