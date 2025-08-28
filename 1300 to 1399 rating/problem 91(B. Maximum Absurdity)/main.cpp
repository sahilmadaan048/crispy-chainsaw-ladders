// https://codeforces.com/problemset/problem/332/B

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
    int n, k; cin >> n >> k;

    vector<int> temp(n);

    int total = 0;
    for(int i=0; i<n; i++) {
        cin >> temp[i];
        total += temp[i];
    }

    // print a and b such that [a, a+k-1] and [b, b+k-1] 
    // summing up the absurdities in these 2 segments is the maximum sum we can get

    // int aSum = 0, bSum;
    int a = 0, b = n-1;
    int prev = accumulate(temp.begin(), temp.begin() + k - 1, 0);

    //  lets make a prefix widows of size k from the foen tand pne from the back for a and b resopectibely
    for(int i=k; i<=n-k; i++) {
        int curr = accumulate(temp.begin() + i, temp.begin() + i + k - 1, 0);
        if(curr > prev) {
            prev = curr;
            // aSum = curr;
            a = i;
        }
    }


    int prev2 =  accumulate(temp.begin() + a + k, temp.begin() + a + 2 * k - 1, 0);
    for(int i=a+k; i<=n-k; i++) {
        int curr = accumulate(temp.begin() + i, temp.begin() + i + k - 1, 0);
        if(curr > prev2) {
            prev2 = curr;
            // bSum = curr;
            b = i;
        }
    }
    cout << a+1 << " " << b+1 << endl;
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

    

