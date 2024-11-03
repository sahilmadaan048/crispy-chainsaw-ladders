// https://codeforces.com/problemset/problem/104/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n ;
	if(n>21 || n<10){
		cout << "0";
		return 0;
	}
	int diff = n-10 ; //that's the required  number we  want from the second card
	if(diff > 0 && diff != 10) cout << "4";
	else if(diff == 0) cout << "0" ; 
	else cout << "15";
}