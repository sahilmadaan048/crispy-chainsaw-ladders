// https://codeforces.com/problemset/problem/237/A

// https://codeforces.com/problemset/problem/237/A

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main(){
	fast;
	int n; cin >> n;
	vector<vector<int>> temp(24, vector<int>(60 ,0));
	for(int i=0; i<n; i++){
		int h, m; cin >> h >> m;
		temp[h][m]++;
	}
	int maxi = 0;
	for(auto row: temp){
		maxi = max(maxi, *max_element(row.begin(), row.end()));
	}
	cout << maxi << "\n";
	return 0;
}