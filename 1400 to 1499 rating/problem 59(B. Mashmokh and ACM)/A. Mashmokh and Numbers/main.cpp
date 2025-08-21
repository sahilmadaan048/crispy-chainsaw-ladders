#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int n, k;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> k;

  if (n < 2 and k == 0) {

    cout << "1" << endl;
    return 0;
  }

  if (n < 2 and k > 0) {
    cout << "-1" << endl;
    return 0;
  }

  if (k < n / 2) {
    cout << "-1" << endl;
    return 0;
  }

  // a1 a2 a3 a4 a5 a6......an-1 an
  // sum (gcd(a, b))

  vector<int> temp;

  // temp.push_back(1);
  // temp.push_back(2);
  //
  int x = k - ((n - 2) / 2);

  temp.push_back(x);
  temp.push_back(2 * x);

  int rem = (n - 2) / 2;
  int start = 2 * x + 1;
  for (int i = 0; i <= rem; i++) {
    temp.push_back(start);
    start++;
  }

  if ((n % 2 == 1)) {
    temp.push_back(temp.back() + 1);
  }

  for (auto ele : temp) {
    cout << ele << " ";
    // return 0;
  }
}
