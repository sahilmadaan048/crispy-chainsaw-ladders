
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
int memo[101][101][11][11];

int C(int f, int h, int kf, int kh) {
  if (kf < 0 || kh < 0 || f < 0 || h < 0)
    return 0; // boundary check

  if (memo[f][h][kf][kh] != -1)
    return memo[f][h][kf][kh];

  if (f + h == 0)
    return 1;

  int ans = 0;

  if (f > 0 && kf > 0)
    ans = (ans + C(f - 1, h, kf - 1, k2)) % MOD;

  if (h > 0 && kh > 0)
    ans = (ans + C(f, h - 1, k1, kh - 1)) % MOD;

  return memo[f][h][kf][kh] = ans;
}

void solve() {
  cin >> n1 >> n2 >> k1 >> k2;
  cout << C(n1, n2, k1, k2) << endl;
}

int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  memset(memo, -1, sizeof memo);
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
