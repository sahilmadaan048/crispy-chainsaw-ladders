// https://codeforces.com/problemset/problem/463/C

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
    vector<vector<int>> a(n, vector<int>(n));
    // temp.assign(n, vector<int>(n, 0));
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> diag1(2*n, 0), diag2(2*n, 0);

    // diaginal su poreorocess
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            diag1[i-  j + n] += a[i][j];
            diag2[i + j] += a[i][j];
        }
    }

    // best cells for even and odd (i+j)
    int best_even = -1, best_odd = -1;
    pair<int, int> pos_even, pos_odd;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int val = diag1[i - j + n] + diag2[i + j] - a[i][j];
            if((i+j)%2 == 0) {
                if(val > best_even) {
                    best_even = val;
                    pos_even = {i+1, j+1};
                }
            }
            else {
                if(val > best_odd) {
                    best_odd = val;
                    pos_odd = {i+1, j+1};
                }
            }
        }
    }

    cout << best_even + best_odd << endl;

    cout << pos_even.first << " " << pos_even.second << " " << pos_odd.first << " " << pos_odd.second << endl;

    return;
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

    