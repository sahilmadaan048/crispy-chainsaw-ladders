// https://codeforces.com/problemset/problem/344/B


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
  int a,b,c; ci(a); ci(b); ci(c);
  int sum = a+b+c;
  if(sum%2 == 1){
    cout << "Impossible\n";
    return;
  }

  //solve the following for values x,y,z 

  /*
  x+z=a
  y+x=b
  y+z=c

  z-y = a-b
  z+y = c
  2z = a-b+c
  z = (a-b+c)/2
  y = (c+b-a)/2
  x = (a+B-c)/2

  //these should not be neg else print them
  */
  int v3 = (a-b+c)/2, v2 = (c+b-a)/2, v1 = (a+b-c)/2;
  if(v1<0 or v2<0 or v3<0){
    cout << "Impossible\n";
    return;
  }
  cout << v1 << " " << v2 << " " << v3 << "\n";  
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
