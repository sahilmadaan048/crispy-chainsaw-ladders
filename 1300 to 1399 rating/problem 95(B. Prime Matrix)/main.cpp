 // https://codeforces.com/problemset/problem/271/B

#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
const int MAXV = 1005000; // safe upper bound for values (1e6 + 5k)

vector<int> nextPrimeArr; // nextPrimeArr[x] = smallest prime >= x

int rowCost(const vector<int>& row) {
    int64_t sum = 0;
    for (int val : row) {
        if (val <= MAXV) sum += (nextPrimeArr[val] - val);
        else {
            // fallback (shouldn't happen for typical CF constraints):
            int cur = val;
            while (true) {
                bool isP = true;
                for (long long d = 2; d * d <= cur; ++d) {
                    if (cur % d == 0) { isP = false; break; }
                }
                if (isP) { sum += (cur - val); break; }
                ++cur;
            }
        }
    }
    return sum;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> transposed(m, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            transposed[j][i] = a[i][j];
        }
    }
    
    int64_t mini = LLONG_MAX;
    
    
    // make it a primsm matrix in the minimum number of omves
    /***
     * moves
     *  -`either make a row with all primt numbers ot make a column with prime numbers
     * 
     */
    
    // lets brite force it for evey cilumn check the minimum number of moves to make all elements prme
    // then do the samem foe all the oclumns 
    //then retutn the muinimum

    for (int i = 0; i < n; ++i) {
        mini = min(mini, (int64_t)rowCost(a[i]));
    }
    for (int j = 0; j < m; ++j) {
        mini = min(mini, (int64_t)rowCost(transposed[j]));
    }

    cout << mini << '\n';
}

void prepareSieve() {
    vector<char> isPrime(MAXV + 2, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; (long long)i * i <= MAXV; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXV; j += i) isPrime[j] = false;
        }
    }
    nextPrimeArr.assign(MAXV + 2, 0);
    int last = -1;
    for (int i = MAXV; i >= 0; --i) {
        if (isPrime[i]) last = i;
        nextPrimeArr[i] = (last == -1 ? MAXV+1 : last);
    }
}

int32_t main() {
    prepareSieve();
    solve();
    return 0;
}