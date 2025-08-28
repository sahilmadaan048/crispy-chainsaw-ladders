#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];

  sort(s.begin(), s.end());

  int i = 0, j = n / 2, pairs = 0;

  while (i < n / 2 && j < n) {
    if (s[j] >= 2 * s[i]) {
      pairs++;
      i++;
      j++;
    } else {
      j++;
    }
  }

  cout << n - pairs << "\n";
}
