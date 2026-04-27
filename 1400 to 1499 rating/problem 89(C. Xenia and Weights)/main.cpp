// https://codeforces.com/problemset/problem/339/C
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


int m;
vector<int> weights;
int dp[1005][2005][11];
int parent_w[1005][2005][11];
int parent_diff[1005][2005][11];


void solve(){
    string s;
    cin >> s;
    cin >> m;

    for(int i = 0; i < 10; i++) {
        if(s[i] == '1') weights.push_back(i + 1);
    }

    memset(dp, -1, sizeof(dp));
    const int OFFSET = 1000;

    dp[0][OFFSET][0] = 1;

    for(int step = 0; step < m; step++) {
        for(int diff = -1000; diff <= 1000; diff++) {
            for(int last = 0; last <= 10; last++) {
                if(dp[step][diff + OFFSET][last] == 1) {
                    for(int w : weights) {
                        if(w == last) continue;
                        int new_diff = diff;
                        if(step % 2 == 0) {
                            new_diff += w;
                            if(new_diff <= 0) continue;
                        } else {
                            new_diff -= w;
                            if(new_diff >= 0) continue;
                        }
                        if(new_diff < -1000 || new_diff > 1000) continue;
                        if(dp[step + 1][new_diff + OFFSET][w] == -1) {
                            dp[step + 1][new_diff + OFFSET][w] = 1;
                            parent_w[step + 1][new_diff + OFFSET][w] = last;
                            parent_diff[step + 1][new_diff + OFFSET][w] = diff;
                        }
                    }
                }
            }
        }
    }

    int final_diff = -1, final_last = -1;

    for(int diff = -1000; diff <= 1000; diff++) {
        for(int last = 1; last <= 10; last++) {
            if(dp[m][diff + OFFSET][last] == 1) {
                final_diff = diff;
                final_last = last;
                break;
            }
        }
        if(final_diff != -1) break;
    }

    if(final_diff == -1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    vector<int> ans;
    int step = m;
    int diff = final_diff;
    int last = final_last;

    while(step > 0) {
        ans.push_back(last);
        int prev_last = parent_w[step][diff + OFFSET][last];
        int prev_diff = parent_diff[step][diff + OFFSET][last];
        last = prev_last;
        diff = prev_diff;
        step--;
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans) cout << x << " ";
    cout << "\n";

	return;
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
