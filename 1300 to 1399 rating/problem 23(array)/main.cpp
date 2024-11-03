/*
A. Array
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vitaly has an array of n distinct integers. Vitaly wants to divide this array into three non-empty sets so as the following conditions hold:

The product of all numbers in the first set is less than zero ( < 0).
The product of all numbers in the second set is greater than zero ( > 0).
The product of all numbers in the third set is equal to zero.
Each number from the initial array must occur in exactly one set.
Help Vitaly. Divide the given array.

Input
The first line of the input contains integer n (3 ≤ n ≤ 100). The second line contains n space-separated distinct integers a1, a2, ..., an (|ai| ≤ 103) — the array elements.

Output
In the first line print integer n1 (n1 > 0) — the number of elements in the first set. Then print n1 numbers — the elements that got to the first set.

In the next line print integer n2 (n2 > 0) — the number of elements in the second set. Then print n2 numbers — the elements that got to the second set.

In the next line print integer n3 (n3 > 0) — the number of elements in the third set. Then print n3 numbers — the elements that got to the third set.

The printed sets must meet the described conditions. It is guaranteed that the solution exists. If there are several solutions, you are allowed to print any of them.

Examples
inputCopy
3
-1 2 0
outputCopy
1 -1
1 2
1 0
inputCopy
4
-1 -2 -3 0
outputCopy
1 -1
2 -3 -2
1 0
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> temp(n);

	for(int i = 0 ;i< n ; i++){
		cin >> temp[i];
	}
	
}