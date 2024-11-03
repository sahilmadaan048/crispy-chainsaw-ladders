// https://codeforces.com/problemset/problem/43/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n;
	unordered_map<string , int> map1;
	for(int i = 0 ; i< n;  i++){
		string s;
		cin >> s;
		map1[s]++;
	}
	int maxGoals = 0 ;
	// string ans;
 
	for(auto &pair : map1){
		maxGoals = max(maxGoals, pair.second);
	}
	for(auto &pair : map1){
		if(pair.second == maxGoals){
			cout << pair.first << endl;
			break;
		}
	}
	return 0;
}