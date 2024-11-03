// https://codeforces.com/problemset/problem/260/A

// // https://codeforces.com/problemset/problem/260/A

// #include <bits/stdc++.h>
// using namespace std;
// #define ll             long long int 
// #define ulli           unsigned long long int 
// #define li             long int 
// #define ff(i,a,b)      for(int i=a;i<b;i++)
// #define fb(i,b,a)      for(int i=b;i>=a;i--)
// #define w(t)           while(--t >= 0)
// #define l(s)           s.length()
// #define ci(n)          cin>>n;
// #define fast           ios_base::sync_with_stdio(false);
// #define sa(a,n)        sort(a,a+n)
// #define sv(v)          sort(v.begin(),v.end())
// #define cy             cout<<"YES\n"
// #define cn             cout<<"NO\n"
// #define nl             cout<<"\n"
// #define minus          cout<<"-1\n";
// #define vi             vector<int>
// #define pb             push_back
// #define tc             int t; cin>>t;
// #define pp             pair<int,int>
// #define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
// #define mod            1000000007
// #define co(n)          cout<<n;
// #define ret            return 0
// #define mi             map<int,int>
// #define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
// #define forn(i, n)     ff(i, 0, n)
// #define sz(v)          int((v).size())

// bool test(ll &a, ll b, string &s){
//     int n = s.size();
//     for(ll i=a*10; i<(a+1)*10; i++){
//         if(i%b == 0){
//             string temp = to_string(i);
//             s += (temp[n]);
//             a = i;  // update a to avoid overflow in further iterations
//             return true;
//         }
//     }
//     return false;
// }

// void solve(){
//     ll a, b, n; ci(a); ci(b); ci(n);
//     string sa = to_string(a);
//     while(n--){
//         if(!test(a,b,sa)){
//             cout << -1 << "\n";
//             return;
//         }
//     }
//     cout << sa << "\n";    
//     return;
// }

// int main(){
//     fast;
//     int t=1;
//     while(t--){
//         solve();
//     }
//     return 0;
// }



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


ll power(ll a){
	ll res = 1;
	while(a--) res*=10;
	return res;
}

void solve(){
	ll a, b, n; cin>>a>>b>>n;
	bool flag = false;
	for(int i=0; i<=9; i++){
		ulli x = a*10+i;
		if(x%b == 0){
			flag = true;
			cout << x ;
			break;
		}
	}
	if(!flag){
		cout << "-1\n";
	}
	else{
		for(int i=2; i<=n; i++){
			cout << "0";
		}
		cout << "\n";
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