// https://codeforces.com/problemset/problem/352/A

 
#include<bits/stdc++.h.>
using namespace std;
 
int main(){
	int n;
	cin >> n;
 
	int zero_count = 0 ;
	int sum = 0 ;
	for(int i = 0 ; i< n ; i++){
		int digit;
		cin >> digit;
		if(digit == 0) zero_count++;
		sum += digit ;
	}
	if(!zero_count){
		cout << "-1" << endl;
		return  0 ;
	}
	else if((sum%9 != 0) && (sum>45)){
		for(int i = 0; i<(sum/45 * 9) ; i++){
			cout << "5";
		}
		for(int i = 0 ; i<zero_count ; i++){
			cout << "0";
		}
		;
	}else if(sum%9 == 0 && sum!=0){
		for(int i = 0 ; i< (sum/45 * 9) ; i++){
			cout  << "5" ;
		}
		for(int i = 0 ; i< zero_count ; i++){
			cout << "0" ;
		}
		// return  0 ;
	}
	else{
		cout << "0" ;
	}
 
}
