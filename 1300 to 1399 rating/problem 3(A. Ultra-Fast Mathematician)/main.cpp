// https://codeforces.com/problemset/problem/61/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
	string num1, num2;
	cin >> num1>> num2;
 
	string result = "";
 
 
	for(int i =0 ; i<num1.size() ; i++){
		int curr = ((int)num1[i]) ^ ((int)num2[i]);
		cout << curr ;
		// result.push_back(curr) ;l
	}
	// cout << result ;
}