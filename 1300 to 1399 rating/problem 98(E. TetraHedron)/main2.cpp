#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // dp[i][j] = ways to reach node j after i steps
    vector<vector<long long>> dp(n+1, vector<long long>(4, 0));

    // Base case: at step 0, we are at D (node 3)
    dp[0][3] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 4; j++) {
            long long sum = 0;
            for (int k = 0; k < 4; k++) {
                if (k == j) continue;
                sum += dp[i-1][k];
                if (sum >= MOD) sum -= MOD;
            }
            dp[i][j] = sum;
        }
    }

    cout << dp[n][3] % MOD << "\n";
    return 0;
}
