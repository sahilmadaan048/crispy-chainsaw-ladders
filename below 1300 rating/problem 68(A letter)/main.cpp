// https://codeforces.com/problemset/problem/43/B

#include<bits/stdc++.h>
using namespace std;

bool check(unordered_map<char, int> &mp1, unordered_map<char, int>& mp2, string &s1, string &s2){
	bool flag = true;
	for(auto ch: s2){
		if(mp1[ch]<mp2[ch]){
			flag = false;
			break;
		}
	}
	return flag;
}

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	unordered_map<char, int> mp1,mp2;
	for(auto ch: s1){
		if(ch == ' ') continue;
		else mp1[ch]++;
	}
	for(auto ch: s2){
		if(ch == ' ') continue;
		else mp2[ch]++;
	}
	if(check(mp1, mp2,s1, s2)){
		cout << "YES\n";
	}
	else cout << "NO\n";
	return 0;
}