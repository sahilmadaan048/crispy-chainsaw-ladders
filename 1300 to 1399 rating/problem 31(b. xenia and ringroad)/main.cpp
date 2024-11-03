// https://codeforces.com/problemset/problem/339/B

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long  n, m;
	cin >> n >> m;
	vector<long long> a(m);
	for(int i= 0 ; i<m ; i++){
		cin >> a[i];
	}
	//take the input elements
	// for(auto &ele : temp){
	// 	cout << ele << " " ;
	// }

	//total number of houses is 
	long long count = a[0]-1 ;
	for(long long i = 1 ; i<m ; i++){
		// count += a[0] 
		if(a[i] >= a[i-1]){
			count += (a[i] - a[i-1]);
		}
		else{
			count += (n-(abs(a[i]-a[i-1])));
		}
		// cout << count << endl;
	}
	cout << count << endl;
	
}