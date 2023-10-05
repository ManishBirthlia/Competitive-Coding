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
class BSTIterator {
    vector<int>ans;
    int i=0;
    void InOrderedTraversal(TreeNode* root){
        if(!root) return ;
        InOrderedTraversal(root->left);
        ans.push_back(root->val);
        InOrderedTraversal(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        InOrderedTraversal(root);
    }
    int next(){
        i++;
        return ans[i-1]; 
    }
    bool hasNext() {
        return i<size(ans);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */