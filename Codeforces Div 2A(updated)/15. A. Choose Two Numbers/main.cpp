// https://codeforces.com/problemset/problem/1206/A



#include <bits/stdc++.h>
using namespace std;
#define vi  vector<int>
void solve(){
	int n; cin>>n;
	vi a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	
	int m;cin>>m;
	vi b(m);
	for(int i=0; i<m; i++) cin>>b[i];
	
	unordered_set<int> sa(a.begin(), a.end());
	unordered_set<int> sb(b.begin(), b.end());
	for(int i=0; i<n; i++){
		int elea= a[i];
		for(int j=0; j<m; j++){
			int eleb = b[j];
			if((sa.find(elea+eleb) == sa.end()) and (sb.find(elea+eleb)==sb.end())){
				cout<<elea<< " " << eleb<< endl;
				// break;
				// flag = true;
				return;
			}
		}
	}
	return;
}	

int main(){
	// fast;/
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}
