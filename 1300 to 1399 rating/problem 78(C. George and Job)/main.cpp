// sahilmadaan048
// https://codeforces.com/problemset/problem/467/C

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
	int n, m, k; cin >> n >> m >> k;
	vi p(n); 

	fr(i, n) {
		cin >> p[i];
	}

	vector<int> segSum(n - m + 1);

	int sum = 0;

	fr(i, m) {
		sum += p[i];
	}
	segSum[0] = sum;

	for(int i=m; i<n; i++) {
		sum += p[i] - p[i-m]; // new element added at last and the first element of the previous segment removed 
		segSum[i - m + 1] = sum;
	}


	// at eachplace we are storing, dp[i][[j]] = max sum we can get from the first i elementm, using k segments
	vector<vector<int>> dp(n+1, vector<int>(k+1, 0)); 


	for(int i=1; i<=n; i++) {
		for(int j=0; j<=k; j++) {
			// not take
			dp[i][j] = dp[i-1][j];

			// take only ifi>=m and j.>=
			// tak segemnt fo length m ending at i only if 
			if(i >= m and j  >= 1) {
				dp[i][j] = max(dp[i][j], dp[i-m][j-1] + segSum[i-m]);
			}
		}
	}


	cout << dp[n][k] << endl;


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

	