/*
A. Little Elephant and Function
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The Little Elephant enjoys recursive functions.

This time he enjoys the sorting function. Let a is a permutation of an integers from 1 to n, inclusive, and ai denotes the i-th element of the permutation. The Little Elephant's recursive function f(x), that sorts the first x permutation's elements, works as follows

If x = 1, exit the function.
Otherwise, call f(x - 1), and then make swap(ax - 1, ax) (swap the x-th and (x - 1)-th elements of a).
The Little Elephant's teacher believes that this function does not work correctly. But that-be do not get an F, the Little Elephant wants to show the performance of its function. Help him, find a permutation of numbers from 1 to n, such that after performing the Little Elephant's function (that is call f(n)), the permutation will be sorted in ascending order.

Input
A single line contains integer n (1 ≤ n ≤ 1000) — the size of permutation.

Output
In a single line print n distinct integers from 1 to n — the required permutation. Numbers in a line should be separated by spaces.

It is guaranteed that the answer exists.

Examples
inputCopy
1
outputCopy
1 
inputCopy
2
outputCopy
2 1 


*/
// #include<bits/stdc++.h>
// using namespace std;

// a is the permutatioin of all the integers from 1 to n

// void sort(int n ){
// 	// vector<int> temp(n);
// 	cout << n << " ";
// 	for(int i = 1; i<n ; i++){
// 		cout << i << " ";
// 	}
// 	cout << endl;
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	sort(n);
// }

// void sort(int n){
// 	cout << n << " ";
// 	// if(n==1){
// 	// 	// cout << "1" << " ";
// 	// 	return ;
// 	// }

// 	if(n==1) return ;
// 	cout << (n-1) << " " ;
// 	return sort(n-1);
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	sort(n);
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

// a is the permutatioin of all the integers from 1 to n

void sort(int n ){
	// vector<int> temp(n);
	cout << n << " ";
	for(int i = 1; i<n ; i++){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	sort(n);
}
