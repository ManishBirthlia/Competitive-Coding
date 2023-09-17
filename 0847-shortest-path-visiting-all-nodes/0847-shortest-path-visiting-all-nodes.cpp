class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        int finalState = (1 << n) - 1;
        queue<pair<int, pair<int, int>>> q;
        set<pair<int, int>> visited;
        for (int i = 0; i < n; i++) {
            q.push({i, {0, 1 << i}});
            visited.insert({i, 1 << i});
        }
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            int node = curr.first, dist = curr.second.first, mask = curr.second.second;
            if (mask == finalState) return dist;
            for (auto x : graph[node]) {
                int nextMask = mask | (1 << x);
                if (!visited.count({x, nextMask})) {
                    q.push({x, {dist + 1, nextMask}});
                    visited.insert({x, nextMask});
                }
            }
        }
        return -1;
    }
};