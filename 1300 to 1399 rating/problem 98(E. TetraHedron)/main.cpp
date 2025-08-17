// https://codeforces.com/problemset/problem/166/E

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


void solve(){
    int n; cin >> n;


    // recurrence relation
    // 3d dp
    // 3 indexes parameters
    // start node, end node, ken
    // dp[D][D][l] = (dp[D][A][l-1] + dp[A][D][1] ) + (dp[D][B][l-1] + dp[B][D][1] ) + (dp[C][A][l-1] + dp[C][D][1] )
    
    vector<vector<vector<int>>> dp(5, vector<vector<int>>(5, vector<int>(n+1, 0)));
    /**
     * 
     * Base cases => D se D at length 1 = 0;
     * dp[D][A][1] = dp[D][A][1] = dp[D][C][1]  = 1
     * dp[]
     * 
     */
    // BASE CASE
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (i != j) dp[i][j][1] = 1;
            else dp[i][j][1] = 0;
        }
    }

    //travser all statrt node
    for (int len = 2; len <= n; len++) {
        for (int start = 1; start <= 4; start++) {
            for (int end = 1; end <= 4; end++) {
                dp[start][end][len] = 0;
                for (int mid = 1; mid <= 4; mid++) {  // possible prev node
                    if (mid == end) continue; // we dont want curr = prev node while building the dp table 
                    dp[start][end][len] += dp[start][mid][len - 1];
                    if (dp[start][end][len] >= MOD) dp[start][end][len] -= MOD; // keep ans wwithin modular constraint
                }
            }
        }
    }

    cout << dp[4][4][n] << endl;
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

    