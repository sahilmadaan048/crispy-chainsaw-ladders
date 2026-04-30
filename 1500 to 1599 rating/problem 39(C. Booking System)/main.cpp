
// https://codeforces.com/problemset/problem/416/C
// Author - sahilmadaan048

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


void solve() {
    int n;
    cin >> n;

  /*

    m => no of acc req
    s => total money


    -----m lines ----

    (a, b) => ( number of the accepted request , no of table to seat peopke that came via this request)
  
  */


    vector<tuple<int,int,int>> groups; 
    // {money, size, original_index}

    for (int i = 0; i < n; i++) {
        int c, p;
        cin >> c >> p;
        groups.push_back({p, c, i + 1});
    }

    int k;
    cin >> k;

    multiset<pair<int,int>> tables;
    // {capacity, table_index}

    for (int i = 0; i < k; i++) {
        int r;
        cin >> r;
        tables.insert({r, i + 1});
    }

    sort(groups.begin(), groups.end(), greater<>());

    long long total_money = 0;
    vector<pair<int,int>> answer;

    for (auto &[money, size, idx] : groups) {

        auto it = tables.lower_bound({size, 0});
        if (it == tables.end()) continue;

        total_money += money;
        answer.push_back({idx, it->second});
        tables.erase(it);
    }

    cout << answer.size() << " " << total_money << "\n";
    for (auto &[g, t] : answer) {
        cout << g << " " << t << "\n";
    }
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
