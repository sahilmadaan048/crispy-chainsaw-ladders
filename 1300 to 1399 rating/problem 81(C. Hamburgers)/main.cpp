// https://codeforces.com/problemset/problem/371/C

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
void solve() {
    string str;
    cin >> str;
    int b, s, c; // stock
    cin >> b >> s >> c;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    int r;
    cin >> r;

    int b1 = 0, s1 = 0, c1 = 0; // requirement counters

    for (auto ele : str) {
        if (ele == 'B') b1++;
        else if (ele == 'S') s1++;
        else if (ele == 'C') c1++;
    }
    
    // i need b1, s1, c1 to make make one burger, in total i have b, s , c int he kithcen, if not sifficirnt i will have to have them from
    // the store nearby, where the provces are fixed, the total bumber og money he can spend is fixed ,
    // we have to fn the macimum number of burgers that can ve made given these constraits
    
    auto canMake = [&](int x) {
        long long needB = max(0LL, x * b1 - b);
        long long needS = max(0LL, x * s1 - s);
        long long needC = max(0LL, x * c1 - c);
        long long cost = needB * pb + needS * ps + needC * pc;
        return cost <= r;
    };

    int lo = 0, hi = 1;
    while (canMake(hi)) {
        if (hi > (long long)4e18 / 2) break;
        hi <<= 1;
    }

    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        if (canMake(mid)) lo = mid;
        else hi = mid - 1;
    }

    cout << lo << '\n';
}



int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    while (T--)
    {
        solve();
    }
    return 0;
}
