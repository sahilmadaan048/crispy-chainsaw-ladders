// https://codeforces.com/problemset/problem/285/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, t; 
    cin >> n >> s >> t; 
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    if (s == t) {
        cout << 0 << endl;
        return;
    }

    queue<int> q;
    vector<bool> visited(n + 1, false);
    q.push(s);
    visited[s] = true;

    int steps = 0;

    while (!q.empty()) {
        steps++;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int current = q.front();
            q.pop();
            
            int next = p[current - 1];
            if (next == t) {
                cout << steps << endl;
                return;
            }
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }

    cout << -1 << endl; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    return 0;
}
