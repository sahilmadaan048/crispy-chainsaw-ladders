// https://codeforces.com/problemset/problem/186/A

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	vector<vector<int>> temp(5, vector<int>(5));
// 	for(int i=0; i<5; i++){
// 		for(int j=0; j<5; j++){
// 			cin >> temp[i][j];
// 		}
// 	}	

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b; cin >> a >> b;
	unordered_map<char, int> mp1, mp2;
	int n = a.size();
	int m = b.size();
	for(auto ele: a) mp1[ele]++;
	for(auto ele: b) mp2[ele]++;
	if(n!=m or mp1 != mp2) {
		cout << "NO\n";
		return 0;
	}
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(b[i]!=a[i]){
			cnt++;
		}
	}
	if(cnt>2){
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n" << "\n";
	return 0;
}