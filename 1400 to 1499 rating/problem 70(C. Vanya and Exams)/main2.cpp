#include <bits/stdc++.h>
using namespace std;

long long max(long long a, long long b) {
  if (a > b)
    return a;

  else
    return b;
}

int main() {
  int n, r, avg;
  cin >> n >> r >> avg;

  vector<pair<int, int>> temp;

  int score = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    score += a;
    temp.emplace_back(a, b);
  }

  sort(temp.begin(), temp.end(),
       [&](const auto &x, const auto &y) { return x.second < y.second; });

  // sorted in increasing order of essays per point

  long long cnt = 0;
  long long total = 1LL * n * avg;

  long long remaining = total - score;

  for (auto &p : temp) {
    int a = p.first;
    int b = p.second;

    int can = r - a;

    int mini = min((long long)remaining, (long long)can);
    cnt += max(1LL * mini * b, 0);
    remaining -= mini;

    if (remaining <= 0)
      break;
  }

  cout << cnt << endl;
}
