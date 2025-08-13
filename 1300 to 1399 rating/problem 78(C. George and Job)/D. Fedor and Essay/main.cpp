#include <bits/stdc++.h>
using namespace std;

struct WordInfo {
    int rCount;
    int length;
    string word;
};

int countR(const string &s) {
    int cnt = 0;
    for (char c : s) if (tolower(c) == 'r') cnt++;
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;
    vector<string> essay(m);
    for (auto &w : essay) {
        cin >> w;
        for (auto &c : w) c = tolower(c);
    }

    int n;
    cin >> n;

    unordered_map<string, int> id;
    vector<string> words;
    auto getId = [&](const string &w) -> int {
        if (!id.count(w)) {
            id[w] = (int)words.size();
            words.push_back(w);
        }
        return id[w];
    };

    for (auto &w : essay) getId(w);

    vector<pair<int, int>> edges;
    for (int i = 0; i < n; i++) {
        string x, y;
        cin >> x >> y;
        for (auto &c : x) c = tolower(c);
        for (auto &c : y) c = tolower(c);
        int u = getId(x), v = getId(y);
        edges.push_back({u, v});
    }

    int V = (int)words.size();
    vector<vector<int>> g(V), gr(V);
    for (auto &e : edges) {
        int u = e.first, v = e.second;
        g[u].push_back(v);
        gr[v].push_back(u);
    }

    // Kosaraju's algorithm
    vector<int> order, comp(V, -1);
    vector<bool> vis(V, false);

    function<void(int)> dfs1 = [&](int u) {
        vis[u] = true;
        for (int v : g[u]) if (!vis[v]) dfs1(v);
        order.push_back(u);
    };

    function<void(int, int)> dfs2 = [&](int u, int cid) {
        comp[u] = cid;
        for (int v : gr[u]) if (comp[v] == -1) dfs2(v, cid);
    };

    for (int i = 0; i < V; i++) if (!vis[i]) dfs1(i);
    reverse(order.begin(), order.end());
    int cid = 0;
    for (int u : order) if (comp[u] == -1) dfs2(u, cid++);

    // Best word in each SCC
    vector<WordInfo> best(cid, {INT_MAX, INT_MAX, ""});
    for (int i = 0; i < V; i++) {
        int rCnt = countR(words[i]);
        int len = (int)words[i].size();
        if (rCnt < best[comp[i]].rCount || 
           (rCnt == best[comp[i]].rCount && len < best[comp[i]].length)) {
            best[comp[i]] = {rCnt, len, words[i]};
        }
    }

    // Build SCC DAG
    vector<vector<int>> dag(cid);
    vector<int> indeg(cid, 0);
    for (auto &e : edges) {
        int cu = comp[e.first], cv = comp[e.second];
        if (cu != cv) {
            dag[cu].push_back(cv);
            indeg[cv]++;
        }
    }

    // Topological order & propagate best choice
    queue<int> q;
    for (int i = 0; i < cid; i++) if (indeg[i] == 0) q.push(i);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : dag[u]) {
            if (best[v].rCount < best[u].rCount ||
               (best[v].rCount == best[u].rCount && best[v].length < best[u].length)) {
                best[u] = best[v];
            }
            if (--indeg[v] == 0) q.push(v);
        }
    }

    // Final result
    long long totalR = 0, totalLen = 0;
    for (auto &w : essay) {
        int idw = id[w];
        auto bw = best[comp[idw]];
        totalR += bw.rCount;
        totalLen += bw.length;
    }

    cout << totalR << " " << totalLen << "\n";
    return 0;
}
