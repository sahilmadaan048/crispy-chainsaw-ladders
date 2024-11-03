// /*
// B. Sum of Digits
// time limit per test2 seconds
// memory limit per test265 megabytes
// inputstandard input
// outputstandard output
// Having watched the last Harry Potter film, little Gerald also decided to practice magic. He found in his father's magical book a spell that turns any number in the sum of its digits. At the moment Gerald learned that, he came across a number n. How many times can Gerald put a spell on it until the number becomes one-digit

// Input
// The first line contains the only integer n (0 ≤ n ≤ 10100000). It is guaranteed that n doesn't contain any leading zeroes.

// Output
// Print the number of times a number can be replaced by the sum of its digits until it only contains one digit.

// Examples
// inputCopy
// 0
// outputCopy
// 0
// inputCopy
// 10
// outputCopy
// 1
// inputCopy
// 991
// outputCopy
// 3
// Note
// In the first sample the number already is one-digit — Herald can't cast a spell.

// The second test contains number 10. After one casting of a spell it becomes 1, and here the process is completed. Thus, Gerald can only cast the spell once.

// The third test contains number 991. As one casts a spell the following transformations take place 991 → 19 → 10 → 1. After three transformations the number becomes one-digit.


// */

#include<bits/stdc++.h>
using namespace std;

int sumofdigits(int n){
	int sum = 0 ;
	while(n>0){
		sum += (n%10);
		n /= 10;
	}

	return sum;
}

void solve(int n, int count){
	if(n/10 == 0){
		cout << count << " " << endl;
		return ;
	}
	
	solve((sumofdigits(n)), count+1);
}

int main(){
	int n;
	cin >> n;
	int count = 0;
	solve(n, count);

}


// #include <iostream>
// using namespace std;

// int main() {
//     string n;
//     cin >> n;

//     // Compute n % 9
//     int sum_mod_9 = 0;
//     for (char digit : n) {
//         sum_mod_9 = (sum_mod_9 + (digit - '0')) % 9;
//     }

//     // If sum_mod_9 is 0 and n is not "0", then it should be 9
//     if (sum_mod_9 == 0 && n != "0") {
//         cout << 9 << endl;
//     } else {
//         cout << sum_mod_9 << endl;
//     }

//     return 0;
// }
