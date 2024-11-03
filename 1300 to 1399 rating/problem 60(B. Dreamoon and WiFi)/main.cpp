// // https://codeforces.com/problemset/problem/476/B
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

// bool check(string &s){
// 	for(auto ele: s) if(ele == '?') return false;
// 	return true;
// }

// double cal(string &s, bool flag){
// 	double len = 0;
// 	if(flag){
// 		for(auto ele: s){
// 			if(ele == '+') len+=1;
// 			else len -= 1;
// 		}	
// 	}
// 	return len;
// }

// void solve(){
// 	string s1,s2; getline(cin, s1); getline(cin, s2);
// 	int n = s1.size();
// 	double len1 = cal(s1, true);
// 	double ans = 0;
// 	if(check(s2)){
// 		double len2 = cal(s2, true);
// 		if(len1 == len2) {
// 			cout << setprecision(12) << 1.0 << "\n";
// 			return;
// 		}
// 	}
// 	else{
// 		int qcount = count(s2.begin(), s2.end(), '?');
// 		int diff = abs((int)(len1 - cal(s2, false)));
// 		if(diff <= qcount && (qcount - diff) % 2 == 0){
// 			ans = 1.0 / (1 << qcount);
// 		}
// 	}
// 	cout << setprecision(12) << ans << "\n";
// }

// int main(){
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	solve();
// 	return 0;
// }



#include<iostream>
#include<limits.h>
#include<map>
#include<vector>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<fstream>
using namespace std;//miller rabin primality 7 set for 64 bit int {2, 325, 9375, 28178, 450775, 9780504, 1795265022}
#define abs(x) ((x)>0?(x):-(x))
#define M 1000000007
#define lld signed long long int
#define pp pop_back()
#define ps(x) push_back(x)
#define tkint(n) scanf("%d",&n)
#define tkchar(ch) scanf("%c",&ch)
#define tklong(n) scanf("%llu",&n)
#define  ms0(s) memset(s,0,sizeof s)
//vector<int> graph[2*100000+5];int visited[2*100000+5];
string s;
int f;
double ans;
void rec(int pos,int x,double p)
{
    if(pos==s.size())
    {
        if(x==f)ans+=p;
    }
    else if(s[pos]=='+')rec(pos+1,x+1,p);
    else if(s[pos]=='-')rec(pos+1,x-1,p);
    else rec(pos+1,x+1,0.5*p),rec(pos+1,x-1,0.5*p);
}
int main()
{
    f=0;
    string g;
    cin>>g>>s;
    for(int i=0;i<g.size();++i)if(g[i]=='+')++f;else --f;
    rec(0,0,1);
    printf("%0.14f",ans);
}
