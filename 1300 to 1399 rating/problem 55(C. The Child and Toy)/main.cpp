#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fast;
    
    int n, m; 
    cin >> n >> m;
    
    vi cost(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }

    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
    }

    ll ans = 0;

    for (int i = 0; i < m; i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        ans += min(cost[u], cost[v]);
    }

    cout << ans << "\n";

    return 0;
}
