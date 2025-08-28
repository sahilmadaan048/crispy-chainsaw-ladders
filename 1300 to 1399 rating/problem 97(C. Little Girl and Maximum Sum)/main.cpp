// https://codeforces.com/problemset/problem/276/C

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
    int n, q;
    cin >> n >> q;

    vector<int> temp(n);

    fr(i, n) cin >> temp[i];

    int l , r;

    vector<int> freq(n+1, 0); 

    while(q--) {
        cin >> l >> r;
        l--, r--;

        freq[l]++;  // starting from index i , evey element i s covered one more time
    
        if(r+1 < n) freq[r+1] -= 1;

    }


    //  get the actual frewqwuencies
    for (int i = 1; i < n; i++) {
        freq[i] += freq[i - 1];
    }
    freq.pop_back();



    // she reordered it to get the maciimum sum for each e=queey and this the funal sum was maximum
    /**
     * 
     * problem breakdown
     *  - given an arrary sie n (1 based indexing)
     *  - given l and r (q based )
     *  - reorder elements of the array such that the sum of the element in the subrray [l, r] is macimum]
     *  - also there are q queries
     * 
     * for first exampke 3 5 2 gives max ans
     * 
     * i will have to precompute something here - what will be thet -> prefix sum on the modifed array 
     * but how to modify the array such that after i do all the query operations i end up with the maximum sum+
     */

     sort(temp.begin(), temp.end());

     sort(freq.begin(), freq.end());

     int ans = 0;
     for(int i=0; i<n; i++) {
        ans +=  temp[i] * freq[i];
     }

     cout << ans << endl;
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

    