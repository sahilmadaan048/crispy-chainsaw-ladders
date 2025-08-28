// https://codeforces.com/problemset/problem/189/A


// https://codeforces.com/problemset/problem/189/A

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int ans = 0;
	for(int i=0;i<=4000;i++)
		for(int j=0;j<=4000;j++){
			int x = n - i*a - j*b;
			if(x >= 0){
				if(x % c == 0){
					ans = max(ans,i + j + x/c);
				}
			}
		}
	cout<<ans<<'\n';
 
	
}