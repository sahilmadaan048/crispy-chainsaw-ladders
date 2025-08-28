// /*
// A. Pangram
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

// You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

// Input
// The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

// The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

// Output
// Output "YES", if the string is a pangram and "NO" otherwise.

// Examples
// inputCopy
// 12
// toosmallword
// outputCopy
// NO
// inputCopy
// 35
// TheQuickBrownFoxJumpsOverTheLazyDog
// outputCopy
// YES
// */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();

	string str;
	getline(cin, str);
	// cout << str << endl;
	// getline(cin, str);
	// cout << str << endl;

	transform(str.begin(), str.end(), str.begin(), ::tolower);

	unordered_set<char> s;
	for(auto &ch: str){
		s.insert(ch);
	}

	int count = 0 ;
	for(auto &ele : s){
		count ++;
	}

	if(s.size() >= 26){
		cout << "YES" << endl;
	} 
	else {
		cout << "NO" << endl;
	}
	return 0 ;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore();
//     string str;
//     cin >> str;
//     cout << str << endl;

//     // Convert the string to lowercase
//     transform(str.begin(), str.end(), str.begin(), ::tolower);

//     // Use a set to track unique characters
//     unordered_set<char> unique_chars;
//     for (char ch : str) {
//         unique_chars.insert(ch);
//     }

//     // Check if the set contains all 26 letters of the alphabet
//     if (unique_chars.size() >= 26) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// bool isPangram(string str) {
//     transform(str.begin(), str.end(), str.begin(), ::tolower);
//     unordered_set<char> unique_chars;
//     for (char ch : str) {
//         if (isalpha(ch)) {
//             unique_chars.insert(ch);
//         }
//     }
//     return unique_chars.size() == 26;
// }

// int main() {
// 	int n;
// 	cin >> n;
// 	cin.ignore();  //this is important
//     string str ;
//     getline(cin, str);
//     cout << str << endl;

//     if (isPangram(str)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
