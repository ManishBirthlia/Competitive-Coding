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
    static TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        vector<TreeNode*> stack;
        TreeNode* node=root;
        while (node || !stack.empty()){
            while(node){
                stack.push_back(node);
                node=node->right;
            }
            node=stack.back();
            stack.pop_back();
            sum+=node->val;
            node->val=sum;

            node=node->left;
        }
        return root;
    }
};