/*
A. k-String
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A string is called a k-string if it can be represented as k concatenated copies of some string. For example, the string aabaabaabaab is at the same time a 1-string, a 2-string and a 4-string, but it is not a 3-string, a 5-string, or a 6-string and so on. Obviously any string is a 1-string.

You are given a string s, consisting of lowercase English letters and a positive integer k. Your task is to reorder the letters in the string s in such a way that the resulting string is a k-string.

Input
The first input line contains integer k (1 ≤ k ≤ 1000). The second line contains s, all characters in s are lowercase English letters. The string length s satisfies the inequality 1 ≤ s ≤ 1000, where s is the length of string s.

Output
Rearrange the letters in string s in such a way that the result is a k-string. Print the result on a single output line. If there are multiple solutions, print any of them.

If the solution doesn't exist, print -1 (without quotes).

Examples
inputCopy
2
aazz
outputCopy
azaz
inputCopy
3
abcabcabz
outputCopy
-1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin >> k;
	string s;
	cin >> s;

	int n = s.size();
	if(n%k != 0){
		cout  << "-1";
		return 0;
	}

	unordered_map<char, int> table;
	for(auto &c : s){
		table[c]++;
	}

	// string base;
	for(auto& entry : table){
		if((entry.second % k) !=0 ){
			cout << "-1";
			return 0;
		}
	}

	string base = "";
	for(auto &entry : table){
		//to make a string of chracracters c repeated n times  ==> string(n, a)
		base += string(entry.second/k, entry.first);
	}

	string result = "";
	for(int i = 0 ; i< k ; i++){
		result += base;
	}
	reverse(result.begin(), result.end());
	cout << result << endl;
}