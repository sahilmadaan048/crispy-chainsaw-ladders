// https://codeforces.com/problemset/problem/851/A

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, k, t;
    cin >> n >> k >> t;

    cout << min({t, k, n + k - t}) << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
