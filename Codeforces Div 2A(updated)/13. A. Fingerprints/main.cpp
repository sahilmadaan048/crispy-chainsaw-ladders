// https://codeforces.com/problemset/problem/994/A



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
	int n, m; cin>>n>>m;
	vi x(n), y(m);
	unordered_map<int,int> mp;
	for(int i=0; i<n; i++) { 
		cin>>x[i];
		mp[x[i]] = i; //store the index of the elements fo x	
	}
	for(int i=0; i<m; i++) cin>>y[i];	
	unordered_set<int> s(y.begin(), y.end());
	vector<int> ans;
	//lets find the first element in x which is also in y
	//and put it in ans
	
	// for(int i=0; i<=n; i++) {
	// 	if(s.count(i)){
	// 		ans.push_back(i);
	// 		break;
	// 	}
	// }
	
	//now 
	// int last = mp[ans[0]];
	int last = -1;
	for(int i=0; i<n; i++){
		int ele = x[i];
		if(mp[ele]>last and s.count(ele)){
			ans.push_back(ele);
			last = mp[ele];
		}
	}
	for(auto ele: ans) cout<<ele<<" ";
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
