// https://codeforces.com/problemset/problem/129/A

/*
───▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄───
───█▒▒░░░░░░░░░▒▒█───
────█░░█░░░░░█░░█────
─▄▄──█░░░▀█▀░░░█──▄▄─
█░░█─▀▄░░░░░░░▄▀─█░░█

Author- Sahil Madaan

*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin >> n ;
	cin.ignore();
	vector<int> temp(n);
 
	int sum = 0 ;
	for(int i = 0 ; i< n ; i++){
		cin >> temp[i];
		sum += temp[i];
	}
	int count = 0 ;
	for(int i = 0 ;i<n ; i++){
		if(((sum-temp[i]) & 1) == 0 ){
			count ++;
		}
	}
	cout << count << endl;
}