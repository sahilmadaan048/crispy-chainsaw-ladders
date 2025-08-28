
#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates
// would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;
// int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!
int MOD = 1e8;
void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
// ================================== take ip/op like vector,pairs
// directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) {
  return cin >> a.first >> a.second;
}
template <typename typC> istream &operator>>(istream &cin, vector<typC> &a) {
  for (auto &x : a)
    cin >> x;
  return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) {
  return cout << a.first << ' ' << a.second;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a) {
  for (auto &x : a)
    cout << x << '\n';
  return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a) {
  int n = a.size();
  if (!n)
    return cout;
  cout << a[0];
  for (int i = 1; i < n; i++)
    cout << ' ' << a[i];
  return cout;
}
// ===================================END Of the input module
// ==========================================

int n1, n2, k1, k2;
int C[101][101][11][11];

void solve() {
  cin >> n1 >> n2 >> k1 >> k2;

  for (int f = 0; f <= n1; f++) {
    for (int h = 0; h <= n2; h++) {
      for (int kf = 0; kf <= k1; kf++) {
        for (int kh = 0; kh <= k2; kh++) {
          if (f + h == 0) {
            C[f][h][kf][kh] = 1;
            continue;
          }

          long long ans = 0;
          if (f > 0 && kf > 0)
            ans = (ans + C[f - 1][h][kf - 1][k2]) % MOD; // reset horseman count
          if (h > 0 && kh > 0)
            ans = (ans + C[f][h - 1][k1][kh - 1]) % MOD; // reset footman count

          C[f][h][kf][kh] = ans;
        }
      }
    }
  }

  cout << C[n1][n2][k1][k2] << endl;

  return;
}

int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  memset(C, 0, sizeof C);
  int T = 1;
  // cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}

/**
 *
 *the recurrence formed is C(f, h, k1, k2) = horse(f, h-1, k1-1, k2)  +
 *footmen(f-1 , h, ki, k2-1)
 *
 */
