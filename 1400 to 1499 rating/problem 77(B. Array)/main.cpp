// https://codeforces.com/problemset/problem/224/B

#include "bits/stdc++.h"
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> temp(n);
    for (int i = 0; i < n; i++) cin >> temp[i];

    unordered_map<int, int> mp;
    int cnt = 0;
    int l = 0, r = 0;
    int ansl = -1, ansr = -1;

    for (r = 0; r < n; r++) {
        mp[temp[r]]++;
        if (mp[temp[r]] == 1) cnt++;

        while (cnt > k) {
            mp[temp[l]]--;
            if (mp[temp[l]] == 0) cnt--;
            l++;
        }

        if (cnt == k) {
            ansl = l + 1;
            ansr = r + 1;
            break;
        }
    }

    if (ansl == -1) cout << "-1 -1\n";
    else cout << ansl << " " << ansr << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    while (T--) solve();
    return 0;
}
