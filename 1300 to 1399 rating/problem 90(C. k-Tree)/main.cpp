// https://codeforces.com/problemset/problem/431/C


#include <bits/stdc++.h>
using namespace std;

static const int MOD = 1e9+7;

long long n, k, d;
long long ans = 0;

void dfs(long long sum, bool usedBig) {
    if (sum == n) {
        if (usedBig) {
            ans += 1;
            if (ans >= MOD) ans -= MOD;
        }
        return;
    }
    // try all edge weights 1..k
    for (long long w = 1; w <= k; ++w) {
        if (sum + w > n) break;         
        dfs(sum + w, usedBig || (w >= d));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!(cin >> n >> k >> d)) return 0;

    dfs(0, false);
    cout << (ans % MOD) << '\n';
    return 0;
}
