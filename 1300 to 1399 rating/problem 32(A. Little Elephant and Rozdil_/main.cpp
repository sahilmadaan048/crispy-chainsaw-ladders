// https://codeforces.com/problemset/problem/205/A


#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n ; 
	cin.ignore();
 
	vector<int> times(n);
	int mini = INT_MAX;
	for(int i  = 0 ; i < n ; i++){
		cin >> times[i] ; 
		mini = min(mini, times[i]);
	}
 
	int count = 0 ;
	for(int i = 0 ; i< n ; i++){
		if(times[i] == mini){
			count ++;
		}
	}
 
	if(count > 1){
		cout << "Still Rozdil" << endl;
	}
	else{
		for(int i = 0 ; i<n ; i ++){
			if(times[i] == mini){
				cout << (i+1) << endl;
				break;
			}
		}
	}
	return 0;
}