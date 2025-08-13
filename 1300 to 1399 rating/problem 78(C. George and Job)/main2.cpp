// author - sahilmadaan048
// https://codeforces.com/problemset/problem/467/C

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
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

void modadd(int &a, int b) { a = ((a % MOD) + (b % MOD)) % MOD; }
void modsub(int &a, int b) { a = ((a % MOD) - (b % MOD) + MOD) % MOD; }
void modmul(int &a, int b) { a = ((a % MOD) * (b % MOD)) % MOD; }
// ================================== take ip/op like vector,pairs directly!==================================
template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }
template <typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a)
{
    for (auto &x : a)
        cout << x << '\n';
    return cout;
}
template <typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a)
{
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}
// ===================================END Of the input module ==========================================

int n, m, k;
vector<int> p, segSum;
vector<vector<int>> memo;

int solve(int i, int j)
{
    if (j == 0)
        return 0; // no segments left
    if (i > n - m)
        return LLONG_MIN / 2; // not enough elements to form a segment
    if (memo[i][j] != -1)
        return memo[i][j];

    int ans = 0;

    // Option 1: skip current element
    ans = solve(i + 1, j);

    // Option 2: take a segment starting at i
    ans = max(ans, segSum[i] + solve(i + m, j - 1));

    return memo[i][j] = ans;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k;
    p.resize(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    // Precompute sums of all segments of length m
    segSum.resize(n - m + 1);
    int sum = 0;
    for (int i = 0; i < m; i++)
        sum += p[i];
    segSum[0] = sum;
    for (int i = m; i < n; i++)
    {
        sum += p[i] - p[i - m];
        segSum[i - m + 1] = sum;
    }

    memo.assign(n + 1, vector<int>(k + 1, -1));
    cout << solve(0, k) << "\n";
}
