/*
A. Jeff and Digits
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Jeff's got n cards, each card contains either digit 0, or digit 5. Jeff can choose several cards and put them in a line so that he gets some number. What is the largest possible number divisible by 90 Jeff can make from the cards he's got?

Jeff must make the number without leading zero. At that, we assume that number 0 doesn't contain any leading zeroes. Jeff doesn't have to use all the cards.

Input
The first line contains integer n (1 ≤ n ≤ 103). The next line contains n integers a1, a2, ..., an (ai = 0 or ai = 5). Number ai represents the digit that is written on the i-th card.

Output
In a single line print the answer to the problem — the maximum number, divisible by 90. If you can't make any divisible by 90 number from the cards, print -1.

Examples
inputCopy
4
5 0 5 0
outputCopy
0
inputCopy
11
5 5 5 5 5 5 5 5 0 5 5
outputCopy
5555555550
Note
In the first test you can make only one number that is a multiple of 90 — 0.

In the second test you can make number 5555555550, it is a multiple of 90.
*/

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
// 	int n;
// 	cin >> n ;


// 	int zero_count = 0 ;
// 	int five_count = 0 ;
// 	int sum = 0;

// 	for(int i = 0 ; i< n ; i++){
// 		int num;
// 		cin >> num;
// 		if(num == 0) zero_count++;
// 		else five_count++;
// 		sum += num ;
// 	}

// 	if(zero_count == 0){
// 		cout << "-1" << endl;
// 		return 0;
// 	}
// 	else if(sum % 9 != 0){
// 		cout << "0" << endl;
// 		return 0;
// 	}
// 	else{
// 		int k = zero_count / 9 * 9 ;
// 		for(int i = 0 ; i< k ; i++){
// 			cout << "5" ;
// 		}

// 		//will print as masny zeroes as possible
// 		for(int i = 0 ; i < zero_count ; i++){
// 			cout << "0";
// 		}
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int zero_count = 0;
//     int sum = 0;

//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;
//         if(num == 0) {
//             zero_count++;
//         }
//         sum += num;
//     }

//     if(zero_count == 0) {
//         cout << "-1" << endl;
//         return 0;
//     }
//     else if(sum % 9 != 0) {
//         cout << "0" << endl;
//         return 0;
//     }
//     else {
//         int k = zero_count / 9 * 9;
//         for(int i = 0; i < k; i++) {
//             cout << "5";
//         }
//         for(int i = 0; i < zero_count; i++) {
//             cout << "0";
//         }
//     }
//     return 0;
// }


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