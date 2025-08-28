// https://codeforces.com/problemset/problem/222/B
#include "bits/stdc++.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k; 
    cin >> n >> m >> k;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    vector<int> row(n), col(m);
    iota(row.begin(), row.end(), 0);
    iota(col.begin(), col.end(), 0);

    for (int q = 0; q < k; q++) {
        char s;
        int x, y;
        cin >> s >> x >> y;
        x--; y--; // convert to 0-index

        if (s == 'r') {
            swap(row[x], row[y]);
        } else if (s == 'c') {
            swap(col[x], col[y]);
        } else { // 'g'
            cout << a[row[x]][col[y]] << "\n";
        }
    }
    return 0;
}
