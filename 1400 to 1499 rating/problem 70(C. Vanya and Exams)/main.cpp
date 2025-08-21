#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r, avg;
  cin >> n >> r >> avg;

  vector<pair<int, int>> temp;

  int a, b;

  int score = 0;
  for (int i = 0; i < n; i++) {

    cin >> a >> b;
    score += a;
    temp.emplace_back(a, b);
  }

  sort(temp.begin(), temp.end(),
       [&](const auto &a, const auto &b) { return a.second < b.second; });

  // sorted in increadis order of the number of esaays he has ro write for each
  // points

  int cnt = 0;
  int total = n * avg;

  int remaining = total - score;

  for (auto &p : temp) {

    int a = p.first;
    int b = p.second;

    int can = r - a;

    // if(remaining >= can) {
    //     cnt += (can * b);
    //     remaining -= can;
    // }
    // else {
    //     remaining
    // }

    int mini = min(remaining, can);
    cnt += max((mini * b), 0);
    remaining -= mini;

    if (remaining <= 0)
      break;
  }

  cout << cnt << endl;
}
