// https://codeforces.com/problemset/problem/350/C
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


void solve(){
	int n;
	cin >> n;

	vector<pair<int,int>> pts(n);
	long long szAns = 0;

	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		pts[i] = {x, y};

		szAns += 2;
		if(x != 0) szAns += 2;
		if(y != 0) szAns += 2;
	}

	sort(pts.begin(), pts.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
		int d1 = abs(a.first) + abs(a.second);
		int d2 = abs(b.first) + abs(b.second);
		return d1 < d2;
	});

	cout << szAns << "\n";

	for(int i = 0; i < n; i++) {
		int x = pts[i].first;
		int y = pts[i].second;

		if(x > 0)
			cout << 1 << " " << x << " R\n";
		if(x < 0)
			cout << 1 << " " << -x << " L\n";

		if(y > 0)
			cout << 1 << " " << y << " U\n";
		if(y < 0)
			cout << 1 << " " << -y << " D\n";

		cout << 2 << "\n";

		if(x > 0)
			cout << 1 << " " << x << " L\n";
		if(x < 0)
			cout << 1 << " " << -x << " R\n";

		if(y > 0)
			cout << 1 << " " << y << " D\n";
		if(y < 0)
			cout << 1 << " " << -y << " U\n";

		cout << 3 << "\n";

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
