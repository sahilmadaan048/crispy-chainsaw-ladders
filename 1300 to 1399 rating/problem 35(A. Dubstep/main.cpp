// https://codeforces.com/problemset/problem/208/A

 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	cin >> s;
	int n = s.size();
	string result = "";
	int i = 0 ;
	while(i<n){
		string s1 = "";
		for(int j = i ; j< (i+3) && j<n ; j++){
		s1.push_back(s[j]);
	}
 
		if(s1 == "WUB"){ 
			if(!result.empty() && result.back() != ' '){
				result.push_back(' ');
			}
			i += 3;// cout << " ";
		}else{
			// cout << " ";
			result.push_back(s[i]) ;
			// result += " ";
			i ++ ;
		}
	}
	
	cout << result << endl ;
	return  0 ;
}