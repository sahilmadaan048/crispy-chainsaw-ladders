// #include <bits/stdc++.h>
// using namespace std;

// #define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

// void solve() {
//     int n, l, r;
//     cin >> n >> l >> r;
//     l--; // Convert to 0-based index

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     // Creating brr: Sorted from l to end
//     vector<int> brr = arr;
//     sort(brr.begin() + l, brr.end());

//     // Creating crr: Sorted from start to r (descending)
//     vector<int> crr = arr;
//     sort(crr.begin(), crr.begin() + r, greater<int>());

//     // Compute the sums for [l, r)
//     long long sum_brr = accumulate(brr.begin() + l, brr.begin() + r, 0LL);
//     long long sum_crr = accumulate(crr.begin() + l, crr.begin() + r, 0LL);

//     cout << min(sum_brr, sum_crr) << endl;
// }

// int main() {
//     fast;
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



/*
correction =>



*/



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


// void print(int n, string curr, vector<string>& ans, int one, int zero){
//     if(curr.size() == n) {
//         ans.push_back(curr);
//         return;
//     }

//     string op1;
//     string op2;

//     if(one<n/2+1){
//         op1.push_back('1');
//         print(n, op1, ans, one+1, zero);
//     }
//     if(zero<n/2) {
//         op2.push_back('0');
//         print(n, op2, ans, one, zero+1);
//     }
// }



void print(int n, string curr, vector<string>& ans, int one, int zero) {
    // Base case: If length of curr is n, store the result
    if (curr.length() == n) {
        ans.push_back(curr);
        return;
    }

    // Add '1' if possible
    if (one < n / 2) {
        print(n, curr + "1", ans, one + 1, zero);
    }
    
    // Add '0' if possible
    if (zero < n / 2) {
        print(n, curr + "0", ans, one, zero + 1);
    }
}


void solve(){
    int n=5;
    vector<string> ans;
    string curr = "";
    // print(n, curr, ans, 0, 0);
    // for(auto str: ans){
    //     cout<<str<<endl;
    // }
    cout<<"hello"<<endl;
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

    
    