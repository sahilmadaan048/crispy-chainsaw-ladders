// https://codeforces.com/problemset/problem/1017/A


#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

void solve(){
	int n; cin>>n;
	vector<pair<int,int>> temp;
	int thomas_score = 0; 
	int id = 1;
	int a, b, c, d;
	for(int i=0; i<n; i++) {
		cin>>a>>b>>c>>d;
		int total = a+b+c+d;
		temp.push_back({total, id});
		id++;
		if (id == 1) thomas_score = total; 
	}
	sort(temp.begin(), temp.end(), [&](const pair<int, int>&a
		, const pair<int,int>&b){
		if(a.first == b.first) {
			return a.second >  b.second;
		}
		return a.first > b.first;
	});
	
	for(int i=0; i<n; i++){
		if(temp[i].second == 1){
			cout<<i+1<<endl;
			break;
		}
	}
	return;
}

int main(){
	fast;
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
