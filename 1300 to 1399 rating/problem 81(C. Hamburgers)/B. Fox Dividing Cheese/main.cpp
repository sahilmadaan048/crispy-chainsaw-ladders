// https://codeforces.com/contest/371/problem/B

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

static inline array<int, 3> count235(long long x)
{
    array<int, 3> c{0, 0, 0};
    while (x % 2 == 0)
    {
        x /= 2;
        c[0]++;
    }
    while (x % 3 == 0)
    {
        x /= 3;
        c[1]++;
    }
    while (x % 5 == 0)
    {
        x /= 5;
        c[2]++;
    }
    // return exponents, x is reduced to remaining co-prime part
    return c; // remaining value is held by caller
}

void solve()
{
    long long a, b;
    cin >> a >> b;

    // Count exponents of 2,3,5 and strip them out
    long long aa = a, bb = b;

    array<int, 3> ca{0, 0, 0}, cb{0, 0, 0};
    while (aa % 2 == 0)
    {
        aa /= 2;
        ca[0]++;
    }
    while (aa % 3 == 0)
    {
        aa /= 3;
        ca[1]++;
    }
    while (aa % 5 == 0)
    {
        aa /= 5;
        ca[2]++;
    }

    while (bb % 2 == 0)
    {
        bb /= 2;
        cb[0]++;
    }
    while (bb % 3 == 0)
    {
        bb /= 3;
        cb[1]++;
    }
    while (bb % 5 == 0)
    {
        bb /= 5;
        cb[2]++;
    }

    // If the remaining cores differ, impossible
    if (aa != bb)
    {
        cout << -1 << "\n";
        return;
    }

    // Minimum ops = sum of absolute differences of exponents
    long long ops = 0;
    for (int i = 0; i < 3; ++i)
        ops += llabs((long long)ca[i] - (long long)cb[i]);
    cout << ops << "\n";
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
