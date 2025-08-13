// https://codeforces.com/problemset/problem/1236/A  


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
	int a, b, c; cin>>a>>b>>c;
	if(b == 0 || (a==0 and c==0) || ((b==1) and c==0)){
		cout<<0<<endl;
		return;
	}
	int cnt = 0;
	int cnt1 = c/2;
	int sub = min(cnt1, b);
	cnt += 3*sub;
	b -= sub;
	int cnt2 = b/2;
	int sub2 = min(a, cnt2);
	cnt += 3*sub2;
	a -= sub2;
	cout << cnt << endl;
	return  ;
}

int main(){
	fast;
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
