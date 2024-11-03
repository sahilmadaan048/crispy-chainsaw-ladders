// https://codeforces.com/problemset/problem/315/A

// https://codeforces.com/problemset/problem/315/A

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> graph(n);
    vector<int> in_degree(n, 0);
    vector<pair<int, int>> products(n);

    for (int i = 0; i < n; i++) {
        cin >> products[i].first >> products[i].second;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && products[i].second == products[j].first) {
                graph[i].push_back(j);
                in_degree[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (in_degree[i] == 0) {
            count++;
        }
    }

    cout << count << "\n";
}

int main() {
    fast;
    solve();
    return 0;
}