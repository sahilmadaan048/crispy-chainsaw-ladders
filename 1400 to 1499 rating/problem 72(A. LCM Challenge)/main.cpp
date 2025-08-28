#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) { return a / __gcd(a, b) * b; }

long long lcm(long long a, long long b, long long c) {
  return lcm(a, lcm(b, c));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;

  if (n == 1) {
    cout << 1 << "\n";
    return 0;
  }
  if (n == 2) {
    cout << 2 << "\n";
    return 0;
  }
  if (n == 3) {
    cout << 6 << "\n";
    return 0;
  }

  // for n >= 4
  long long ans = 0;
  long long start = max(1LL, n - 50);
  for (long long i = start; i <= n; i++) {
    for (long long j = i + 1; j <= n; j++) {
      for (long long k = j + 1; k <= n; k++) {
        ans = max(ans, lcm(i, j, k));
      }
    }
  }
  cout << ans << "\n";
}
