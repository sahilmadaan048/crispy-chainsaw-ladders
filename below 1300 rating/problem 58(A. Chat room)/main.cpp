/*
A. Chat room
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word hello. For example, if Vasya types the word ahhellllloou, it will be considered that he said hello, and if he types hlelo, it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print YES, otherwise print NO.

Examples
inputCopy
ahhellllloou
outputCopy
YES
inputCopy
hlelo
outputCopy
NO

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	string s;
// 	cin >> s ;

// 	int n = s.size();

// 	if(n<=5){
// 		if(s!="hello"){
// 			cout << "NO" << endl;
// 			return  0;
// 		}else{
// 			cout << "YES" << endl;
// 			return 0;
// 		}
// 	}

// 	unordered_map<char, int> map1;
// 	for(auto &ele : s){
// 		map1[ele]++;
// 	}

// 	bool flag = true;
	
// 	if(map1.find('h') != map1.end()  && map1['h'] < 1){
// 		flag = false;

// 	}else if(map1.find('e') != map1.end()  && map1['e'] < 1){
// 		flag = false;
// 	}else if(map1.find('l') != map1.end()  && map1['l'] < 2){
// 		flag = false;
// 	}else if(map1.find('o') != map1.end()  && map1['o'] < 1){
// 		flag = false;
// 	}


// if(flag){
// 	cout << "YES" << endl;
// 	return 0;
// }
// cout << "NO" << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int countChar(int index , char c, string &temp){
// 	int count = 0 ;
// 	int n = temp.size();
// 	for(int i = index; i<n ; i++){
// 		if(temp[i] == c){
// 			count++;
// 		}
// 	}
// 	return count;
// }

// int main(){
// 	string s;
// 	cin >> s;
// 	cin.ignore();
// 	queue<char> q;

// 	for(auto &ele : s){
// 		if(ele == 'h' || ele == 'e' ||  ele == 'l' || ele == 'o'){
// 			q.push(ele);
// 		}
// 	}
// 	string temp = "";
// 	while(!q.empty()){	
// 		temp.push_back(q.front());
// 		q.pop();
// 	}

// 	bool flag = true;

// 	for(int i = 0 ;i<temp.size(); i++){
// 		if(temp[i] == 'h' && countChar(i, 'h', temp) < 1){
// 			flag = false;
// 			break;
// 			// return ;
// 		}
// 		else if(temp[i] == 'e' && countChar(i, 'e', temp) < 1){
// 			flag = false;
// 			break;
// 		}
// 		else if(temp[i] == 'l' && countChar(i, 'l', temp) < 2){
// 			flag = false;
// 			break;
// 		}
// 		else if(temp[i] == 'o' && countChar(i, 'o', temp) < 1){
// 			flag = false;
// 			break;
// 		}
// 	}


// 	if(!flag){
// 		cout << "NO" << endl;
// 		// return 0;
// 	}
// 	else {
// 		cout << "YES" << endl;
// 	}

// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;

//     // Initialize character counts
//     int hCount = 0, eCount = 0, lCount = 0, oCount = 0;

//     // Count occurrences of each letter
//     for (char c : s) {
//         switch (c) {
//             case 'h': hCount++; break;
//             case 'e': eCount++; break;
//             case 'l': lCount++; break;
//             case 'o': oCount++; break;
//         }
//     }

//     // Check if the counts match the pattern for "hello"
//     if (hCount == 1 && eCount == 1 && lCount == 2 && oCount == 1) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int countChar(int index, char c, string &temp) {
//     int count = 0;
//     int n = temp.size();
//     for (int i = index; i < n; i++) {
//         if (temp[i] == c) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     string s;
//     cin >> s;
//     cin.ignore();
//     queue<char> q;

//     for (auto &ele : s) {
//         if (ele == 'h' || ele == 'e' || ele == 'l' || ele == 'o') {
//             q.push(ele);
//         }
//     }

//     string temp = "";
//     while (!q.empty()) {
//         temp.push_back(q.front());
//         q.pop();
//     }

//     bool flag = true ;

//     for (int i = 0; i < temp.size(); i++) {
//         if (temp[i] == 'h' && (countChar(i, 'h', temp) < 1)) {
//             flag = false;
//             break;
//         } else if (temp[i] == 'e' && (countChar(i, 'e', temp) < 1)) {
//             flag = false;
//             break;
//         } else if (temp[i] == 'l' && (countChar(i, 'l', temp) < 2)) {
//             flag = false;
//             break;
//         } else if (temp[i] == 'o' && (countChar(i, 'o', temp) < 1)) {
//             flag = false;
//             break;
//         }
//     }

//     if (!flag) {
//         cout << "NO" << endl;
//     } else {
//         cout << "YES" << endl;
//     }

//     return 0;
// }
// #include<iostream>

// int main(){
//     std::string word, hello="hello";
//     std::cin>>word;
//     int j=0, pas=0;
//     for(int i=0; i<word.length();i++){
//         if(word[i]==hello[j]){
//             j++;
//             pas++;
//         }
//     }
//     if(pas==5){
//         std::cout<<"YES";
//     }else{
//         std::cout<<"NO";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
	string word, hello = "hello" ;
	cin >> word;
	int j = 0 ;
	int pos = 0 ;
	for(int i = 0 ; i<word.size();i++){
		if(word[i] == hello[j] ){
			j++;
			pos++;
		}
	}
	if(pos == 5){
		cout << "YES" << endl;
		return 0 ;
	}
	cout << "NO" << endl;

}

