// https://codeforces.com/problemset/problem/377/A
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

int n, m, k; 

vector<string> grid;
vector<vector<bool>> vis;
vector<pair<int, int>> order;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y) {
	vis[x][y] = true;
	order.push_back({x, y});

	for(int d=0;d <4; d++) {
		int nx = x + dx[d];
		int ny = y + dy[d];

		if(nx >= 0 and nx < n and ny >= 0 and ny < m and !vis[nx][ny] and grid[nx][ny] == '.') {
			dfs(nx, ny);
		}
	}
}

void solve(){
	cin >> n >> m >> k;
	grid.resize(n);

	vis.assign(n, vector<bool> (m, false));

	int sx = -1, sy = -1;

	for(int i=0; i<n; i++) {
		cin >> grid[i];

		for(int j=0; j<m; j++) {
			if(grid[i][j] == '.' and sx == -1) {
				sx = i;
				sy = j;
			}
		}
	}

	dfs(sx, sy);

	for(int i=(int)order.size()-1; i>=(int)order.size()-k; i--) {
		auto [x, y] = order[i];
		grid[x][y] = 'X';
	}


	for(auto ele: grid) {
		cout << ele << "\n";
	}

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
