//DFS Algorithm - Depth First Search 

void dfs(vector<vector<int>>& adj, vector<int>& res, vector<bool>& visited, int node) {

    res.push_back(node);
    visited[node] = true;

    for (int i = 0; i < adj[node].size(); i++) {
        int neighbour = adj[node][i];
        if (!visited[neighbour]) {
            dfs(adj, res, visited, neighbour);
        }
    }
    return;
}
