// https://codeforces.com/contest/282/submission/275033625

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
 
	int ans = 0;
 
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		if(s[0] == '+' || s[n-1] == '+'){
			ans +=1;
		}
		else if(s[0] == '-' || s[n-1] == '-'){
			ans -= 1;
		}
	}
	cout << ans ;
 
}