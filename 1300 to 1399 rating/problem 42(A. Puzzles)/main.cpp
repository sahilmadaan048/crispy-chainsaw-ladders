// https://codeforces.com/problemset/problem/337/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	// int t;
	// cin >> t;
	// while(t--){
		int n, m;
		cin >> n >> m ;
		vector<int> temp(m);
		for(int i = 0 ; i< m ; i++){
			cin >> temp[i];
		}

		sort(temp.begin(), temp.end());
		
		int min_diff = temp[n-1] - temp[0];
		for(int i = 1; i<(m-n+1) ; i++){
			int diff = temp[i+n-1]-temp[i];
			min_diff = min(min_diff, diff);
		}
	// /input lene ke baad kya karna hai
		// cout << min_diff << endl;
		cout << min_diff << endl;
	}
	// }
// }