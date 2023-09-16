/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* node,unordered_map<int,Node*>&mp){
        if(mp.count(node->val)) return;
        mp[node->val]=new Node(node->val);
        for(auto it:node->neighbors) dfs(it,mp);
    }
    void makeDfs(Node* node,unordered_map<int,Node*>&mp,unordered_map<int,Node*>&vis){
        if(vis.count(node->val)) return ;
        vis[node->val]=node;
        for(auto it:node->neighbors){
            mp[node->val]->neighbors.push_back(mp[it->val]);
            makeDfs(it,mp,vis);
        } 
    }
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<int,Node*>mp,vis;
        dfs(node,mp);
        makeDfs(node,mp,vis);
        return mp[node->val];
    }
};