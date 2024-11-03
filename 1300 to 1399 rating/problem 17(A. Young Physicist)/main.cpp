// https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
 
	vector<vector<int>> ans(t, vector<int>(3));
	for(int i = 0 ; i<t ; i++){
		for(int j = 0 ; j<3 ; j++){
			cin >> ans[i][j];
		}
	}
 
	for(int i = 0 ; i<3 ; i++){
		int sum = 0 ; 
		for(int j = 0 ; j<t ; j++){
			sum += ans[j][i];
		}
		if(sum !=0){
		cout << "NO" ;
		return 0;
	}
	}
	cout << "YES"  ;
}