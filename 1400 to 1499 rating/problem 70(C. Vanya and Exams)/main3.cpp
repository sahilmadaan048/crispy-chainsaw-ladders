#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, r, avg;
  cin >> n >> r >> avg;

  vector<pair<int, int>> temp;

  long long score = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    score += a;
    temp.emplace_back(a, b);
  }

  // sort by number of essays per point (ascending)
  sort(temp.begin(), temp.end(),
       [&](const auto &x, const auto &y) { return x.second < y.second; });

  long long cnt = 0;
  long long total = 1LL * n * avg;
  long long remaining = max(0LL, total - score);

  for (auto &p : temp) {
    long long a = p.first;
    long long b = p.second;

    long long can = r - a;
    long long mini = min(remaining, can);

    cnt += mini * b;
    remaining -= mini;

    if (remaining <= 0)
      break;
  }

  cout << cnt << "\n";
}
