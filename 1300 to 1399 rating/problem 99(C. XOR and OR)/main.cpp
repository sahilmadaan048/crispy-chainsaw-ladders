// https://codeforces.com/problemset/problem/282/C

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

void check(const string &a, const string &b, int i, bool &flag)
{
    // convert chars to 0/1 ints
    int ai = a[i] - '0';
    int ai1 = a[i + 1] - '0';

    int xorVal = ai ^ ai1;
    int orVal = ai | ai1;

    int weHave = xorVal + orVal;
    int weNeed = (b[i] - '0') + (b[i + 1] - '0');

    if (weHave != weNeed)
    {
        flag = true;
    }
}

void solve()
{
    string a, b;
    if (!(cin >> a >> b))
    {
        // no input provided; just return (or you can print something)
        return;
    }

    // int n1 = (int)a.size();
    // int n2 = (int)b.size();

    // if (n1 != n2) {
    //     cout << "NO\n";
    //     return;
    // }

    // bool flag = false;
    // int n = n1;

    // for (int i = 0; i < n; i++) {
    //     if (a[i] == b[i]) continue;

    //     // prefer checking pair (i, i+1) if possible, otherwise (i-1, i)
    //     if (i + 1 < n) {
    //         check(a, b, i, flag);
    //         if (flag) break;
    //     } else if (i - 1 >= 0) {
    //         check(a, b, i - 1, flag);
    //         if (flag) break;
    //     } else {
    //         // single character mismatch and no neighbor to apply your pair-check
    //         flag = true;
    //         break;
    //     }
    // }

    // cout << (flag ? "YES" : "NO") << '\n';
    if (a.size() != b.size())
    {
        cout << "NO\n";
        return;
    }

    bool has1a = (a.find('1') != string::npos);
    bool has1b = (b.find('1') != string::npos);

    if ((has1a && has1b) || (!has1a && !has1b))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}