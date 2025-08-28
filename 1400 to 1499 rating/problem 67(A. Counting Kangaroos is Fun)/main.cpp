#include <bits/stdc++.h>
using namespace std;

bool Kangaroos(int mid, vector<int> &s) {
  int cnt = 0;
  int n = s.size();

  int i = 0;
  int j = n / 2;

  int pairs = 0;

  while (i < n / 2 and j < n) {
    if (s[j] >= 2 * s[i]) {
      pairs++;
      i++;
      j++;
    } else {
      j++;
    }
  }

  return (n - pairs) <= mid;
}

int main() {

  int n;
  cin >> n;
  vector<int> s(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end());

  int lo = 1;

  int hi = n;

  int ans = n;

  while (lo <= hi) {

    int mid = lo + (hi - lo) / 2;

    if (Kangaroos(mid, s)) {
      ans = mid;
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
  }

  cout << ans << endl;
}
