// https://codeforces.com/problemset/problem/493/C

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


// int cal(vector<int>& a,vector<int>&  b, int mid) {
//     int diff  = 0;

//     int scorea = 0, scoreb = 0;
//     for(auto ele: a) {
//         if(ele <= d) {
//             scorea += 2;
//         } else if(ele > d) {
//             scorea += 3;
//         }
//     }

//     for(auto ele: b) {
//         if(ele <= d) {
//             scoreb += 2;
//         } else if(ele > d) {
//             scoreb += 3;
//         }
//     }

//     return a - b;
// }

void solve() {
    int n, m;

    
    cin >> n;
    
    vector<int> a(n);
    fr(i, n) cin >> a[i];
    
    cin >> m;
    vector<int> b(m);
    fr(i, m) cin >> b[i];

    // find d such that a - b is maximised
    int lo = 0;
    int hi = max(*max_element(a.begin(), a.end()), *max_element(b.begin(), b.end()));

    int bestDiff = LLONG_MIN;
    int bestScoreA = 0, bestScoreB = 0;

    for(int d=lo; d<=hi; d++) {
        int scorea = 0, scoreb = 0;
        for(auto ele: a) scorea += (ele <= d ? 2 : 3);
        for(auto ele: b) scoreb += (ele <= d ? 2 : 3);
    
        int diff = scorea - scoreb;

        if(diff > bestDiff || (diff == bestDiff && scorea > bestScoreA)) {
            bestDiff = diff;
            bestScoreA = scorea;
            bestScoreB = scoreb;
        }
    }

    // if i know the value of d , i can now calulcte the ratiou of scores also

    cout << bestScoreA << ":" << bestScoreB << endl;
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

    