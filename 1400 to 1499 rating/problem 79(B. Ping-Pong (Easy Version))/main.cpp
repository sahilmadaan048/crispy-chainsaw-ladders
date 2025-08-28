
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
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

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

int a[111], b[111];

bool f[111];
int n = 0;
void dfs(int i) {
  f[i] = true;
  for (int k = 1; k <= n; k++) {
    if (f[k])
      continue;
    if (a[i] > a[k] && a[i] < b[k])
      dfs(k);
    else if (b[i] > a[k] && b[i] < b[k])
      dfs(k);
  }
}

int k;

void solve() {
  cin >> k;
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  memset(f, 0, sizeof(f));
  for (int i = 1; i <= k; i++) {
    int x, y, m;
    cin >> m;
    if (m == 1) {
      n++;
      cin >> a[n];
      cin >> b[n];
    }
    if (m == 2) {
      cin >> x;
      cin >> y;
      memset(f, 0, sizeof(f));
      dfs(x);
      if (f[y])
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
}

int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T = 1;
  while (T--) {
    solve();
  }
  return 0;
}
