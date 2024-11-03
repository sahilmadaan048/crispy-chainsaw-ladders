// https://codeforces.com/problemset/problem/315/B


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
	int n,m; cin>> n>>m;
	vi temp(n);
	ff(i,0,n) {ci(temp[i]);}
	ll global_add = 0;
	while(m--){
		int t,v,x,y,q; cin>>t;
		if(t == 1){
			ci(v); ci(x);
			temp[v-1]=x-global_add;
		}else if(t == 2){
			ci(y);
			// ff(i,0,n) temp[i]+=y;
			global_add += y;
		}
		else{
			ci(q);
			cout << temp[q-1] + global_add << "\n";
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
