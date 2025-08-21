#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;

  if (n == 1) {
    if (k == 0)
      cout << "1\n";
    else
      cout << "-1\n";
    return 0;
  }

  if (k < n / 2) {
    cout << "-1\n";
    return 0;
  }

  vector<int> temp;
  int x = k - ((n - 2) / 2);

  temp.push_back(x);
  temp.push_back(2 * x);

  int rem = (n - 2);
  int start = 2 * x + 1;
  for (int i = 0; i < rem; i++) {
    temp.push_back(start++);
  }
  //
  // if (n % 2 == 1) {
  //   temp.push_back(start++);
  // }

  for (auto ele : temp) {
    cout << ele << " ";
  }
  cout << "\n";
}
