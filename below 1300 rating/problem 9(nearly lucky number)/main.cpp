/*
A. Nearly Lucky Number
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
40047
outputCopy
NO
inputCopy
7747774
outputCopy
YES
inputCopy
1000000000000000000
outputCopy
NO
Note
In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

In the third sample there are no lucky digits, so the answer is "NO".


*/

//take care about the integer overlfow here in case of integers

#include<bits/stdc++.h>
using namespace std;

int countLucky(long long &num){
	int count = 0 ;
	while(num){
		int ld = num%10;
		if(ld == 4 || ld == 7) count++;
		num /= 10;
	}
	return count;

}

int main(){
	long long n;
	cin >> n;
	cin.ignore();

	int lucky_count = countLucky(n);

	if(lucky_count == 4 || lucky_count == 7) cout << "YES" ;
	else cout << "NO" ;

}

// #include <bits/stdc++.h>
// using namespace std;

// int countLucky(const string &num) {
//     int count = 0;
//     for (char ch : num) {
//         if (ch == '4' || ch == '7') count++;
//     }
//     return count;
// }

// bool isLucky(int num) {
//     while (num) {
//         int ld = num % 10;
//         if (ld != 4 && ld != 7) return false;
//         num /= 10;
//     }
//     return (num != 0);
// }

// int main() {
//     string n;
//     cin >> n;

//     int lucky_count = countLucky(n);

//     if (isLucky(lucky_count)) cout << "YES";
//     else cout << "NO";

//     return 0;
// }
