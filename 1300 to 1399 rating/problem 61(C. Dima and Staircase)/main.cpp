// https://codeforces.com/problemset/problem/272/C


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

// void solve(){
// 	int n; cin>>n;
// 	vi temp(n);
// 	ff(i,0,n) {ci(temp[i]);}
// 	int q; ci(q);
// 	vector<pair<int,int>> t;
// 	while(q--){
// 		int w,h; ci(w); ci(h);
// 		t.push_back(make_pair(w,h));
// 	}	
// 	for(auto pair: t){
// 		int w = pair.first, h = pair.second;
// 		int maxi = 0;
// 		for(int i=0; i<w-1; i++){
// 			maxi = max(maxi, temp[i]);
// 			temp[i] += h;
// 		}
// 		cout << maxi << "\n";
// 	}
// 	return;
// }

ulli max(ulli &a, ulli &b){
    return (a>b ? a:b);
}

void solve(){
    int n; cin>>n;
    vector<ulli> temp(n);
    ff(i,0,n) {ci(temp[i]);}
    int q; ci(q);
    ulli  lastHeight = 0;
    while(q--){
        ulli w,h; ci(w); ci(h);
        cout << max(temp[w-1], lastHeight) << "\n";
        lastHeight = max(temp[w-1], lastHeight) + h;
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
