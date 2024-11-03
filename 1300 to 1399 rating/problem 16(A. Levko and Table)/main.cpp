// https://codeforces.com/problemset/problem/361/A

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int>> ans(n,vector<int>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j){
				ans[i][j] = k;
			}
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}