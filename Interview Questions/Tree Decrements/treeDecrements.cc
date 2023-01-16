int getMinCost(vector<int> val, int t_nodes, vector<int> t_from, vector<int> t_to) {
    int ans = 0, n = int(val.size());
    vector<vector<int>> adj(n);
    for (int i = 0; i < n-1; ++i){
        --t_from[i];
        --t_to[i];
        adj[t_from[i]].push_back(t_to[i]);
        adj[t_to[i]].push_back(t_from[i]);
    }
    function<int(int,int)> dfs = [&](int cur, int parent){
        int cnt = val[cur] & 1;
        for (int next : adj[cur]) if (next != parent){
            int res = dfs(next, cur);
            ans += res;
            cnt ^= res;
        }
        return cnt;
    };
    dfs(0, -1);
    return ans;
}