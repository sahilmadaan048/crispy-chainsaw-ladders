#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int n, k;
vector<vector<int>> memo;

// recursive function with memoization
int solve(int len, int last) {
  if (len == 1)
    return 1; // base case
  int &res = memo[len][last];
  if (res != -1)
    return res;
  res = 0;

  // extend from divisors of `last`
  for (int d = 1; d * d <= last; d++) {
    if (last % d == 0) {
      int div1 = d, div2 = last / d;
      res = (res + solve(len - 1, div1)) % MOD;
      if (div1 != div2)
        res = (res + solve(len - 1, div2)) % MOD;
    }
  }
  return res;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;
  memo.assign(k + 1, vector<int>(n + 1, -1));

  long long ans = 0;
  for (int j = 1; j <= n; j++) {
    ans = (ans + solve(k, j)) % MOD;
  }
  cout << ans << "\n";
}
