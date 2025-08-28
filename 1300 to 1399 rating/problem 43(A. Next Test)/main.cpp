// https://codeforces.com/problemset/problem/27/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> temp(n);
	for(int i=0; i<n; i++) cin >> temp[i];
	// cout << upper_bound(temp.begin(), temp.end(), *(temp.back()));	
	sort(temp.begin(), temp.end());
	int missing = 1;
	for(int i=0; i<n; i++){
		if(temp[i] == missing){
			missing++;	
		}
	}
	cout << missing <<"\n";
}