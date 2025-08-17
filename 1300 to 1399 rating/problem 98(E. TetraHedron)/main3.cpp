#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int64 MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int64> prev(5, 0), cur(5, 0);
    prev[4] = 1; // at step 0 we are at D

    for (int step = 1; step <= n; ++step) {
        int64 sum = 0;
        for (int v = 1; v <= 4; ++v) sum = (sum + prev[v]) % MOD;

        for (int v = 1; v <= 4; ++v) {
            cur[v] = (sum - prev[v]) % MOD;
            if (cur[v] < 0) cur[v] += MOD;
        }
        prev = cur;
    }

    cout << prev[4] % MOD << '\n';
    return 0;
}
