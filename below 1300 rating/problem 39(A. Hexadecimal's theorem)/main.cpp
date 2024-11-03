/*
A. Hexadecimal's theorem
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Recently, a chaotic virus Hexadecimal advanced a new theorem which will shake the Universe. She thinks that each Fibonacci number can be represented as sum of three not necessary different Fibonacci numbers.

Let's remember how Fibonacci numbers can be calculated. F0 = 0, F1 = 1, and all the next numbers are Fi = Fi - 2 + Fi - 1.

So, Fibonacci numbers make a sequence of numbers: 0, 1, 1, 2, 3, 5, 8, 13, ...

If you haven't run away from the PC in fear, you have to help the virus. Your task is to divide given Fibonacci number n by three not necessary different Fibonacci numbers or say that it is impossible.

Input
The input contains of a single integer n (0 ≤ n < 109) — the number that should be represented by the rules described above. It is guaranteed that n is a Fibonacci number.

Output
Output three required numbers: a, b and c. If there is no answer for the test you have to print "I'm too stupid to solve this problem" without the quotes.

If there are multiple answers, print any of them.

Examples
inputCopy
3
outputCopy
1 1 1
inputCopy
13
outputCopy
2 3 8
*/

//code to create a vector which will have the values of the first n fibonacci
//numbers in it for a given input n

#include<bits/stdc++.h>
using namespace std;

vector<int> generatefibo(int n){
	vector<int> fib = {0,1};
	while(true){
		int next = fib.back() + fib[fib.size()-2];
		if(next > n ) break;
		fib.push_back(next);
	}

	return fib;
}

int main(){
	int n;
	cin >> n ;

	vector<int> fibo = generatefibo(n);
	int size = fibo.size();

	for(int i = (n<3) ? 0 : 1 ; i< size ; i++){
		for(int j = i ; j< size ; j++){
			for(int k = j ; k < size ; k++){
				if(fibo[i] + fibo[j] + fibo[k] == n){
					cout << fibo[i] << " " << fibo[j] << " " << fibo[k] << endl;
					return 0  ;
				}
			}
		}
	}

	// cout << "I'm too stupid to solve this problem" << endl ; 

}
