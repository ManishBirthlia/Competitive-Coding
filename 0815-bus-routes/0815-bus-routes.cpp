class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        int n = routes.size();
        if (source==target) return 0; // edge case
        unordered_map <int, vector<int>> adjlist; // busstop => {routes index1, ...}
        for (int i=0; i<n; i++) {
            for (int stop: routes[i])
                adjlist[stop].push_back(i); // store all the routes(buses) that this stop has
        }
        queue<int> q;
        unordered_set <int> vis;
        // IMP NOTE: route mentioned in all of the following code indicate the bus (bus index)
        for (auto route: adjlist[source]) {
            q.push(route);
            vis.insert(route);
        }
        int busCnt = 1; // we have to take atleast one bus (minimum)
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                int route = q.front();
                q.pop();
                for (auto stop: routes[route]) {
                    if (stop==target) return busCnt;
                    // explore all routes from the current stop
                    for (auto adjRoute: adjlist[stop]) {
                        if (vis.find(adjRoute)==vis.end()) { // or !vis.count(adjRoute)
                            vis.insert(adjRoute);
                            q.push(adjRoute);   
                        }
                    }
                }
            }
            busCnt++;
        }
        return -1;
    }
};