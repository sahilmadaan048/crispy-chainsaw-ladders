// https://codeforces.com/problemset/problem/262/B


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

int find(vi &temp){
	int ans = 0;
	for(auto ele: temp) ans+=ele;
	return ans;
}

void solve(){
	int n, k; ci(n); ci(k);
	vi temp(n); ff(i,0, n) ci(temp[i]);
	sort(temp.begin(),temp.end());
	for(int i=0; i<n and k>0; i++){
		if(temp[i]<0) {temp[i] = -temp[i]; k--;};
	}
	if(k%2 == 1){
		sort(temp.begin(),temp.end());
		temp[0]=-temp[0];
	}
	cout << find(temp) << "\n";
}

int main(){
	fast;
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
