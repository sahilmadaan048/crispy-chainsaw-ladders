#include <bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9 + 7;

int solve(int len, int last, vector<vector<int>> &dp) {
  if (len == 1)
    return 1;

  int &res = dp[len][last];

  if (res != -1)
    return res;
  res = 0;

  for (int d = 1; d * d <= last; d++) {
    // extend from divisoes of lasty
    if (last % d == 0) {
      int div1 = d;
      int div2 = last / d;
      res = (res + solve(len - 1, div1, dp)) % mod;
      if (div1 != div2) {
        res = (res + solve(len - 1, div2, dp)) % mod;
      }
    }
  }

  return dp[len][last] = res;
}

int32_t main() {
  int n, k;
  cin >> n >> k;

  vector<vector<int>> dp(k + 1, vector<int>(n + 1, -1));

  int ans = 0;

  for (int i = 1; i <= n; i++) {
    // solve returns the number of sequences of length k where last number is j
    ans += (solve(k, i, dp) % mod);
  }

  cout << ans << endl;
}
