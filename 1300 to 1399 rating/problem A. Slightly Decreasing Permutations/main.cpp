/*
A. Slightly Decreasing Permutations
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Permutation p is an ordered set of integers p1,  p2,  ...,  pn, consisting of n distinct positive integers, each of them doesn't exceed n. We'll denote the i-th element of permutation p as pi. We'll call number n the size or the length of permutation p1,  p2,  ...,  pn.

The decreasing coefficient of permutation p1, p2, ..., pn is the number of such i (1 ≤ i  n), that pi  pi + 1.

You have numbers n and k. Your task is to print the permutation of length n with decreasing coefficient k.

Input
The single line contains two space-separated integers n, k (1 ≤ n ≤ 105, 0 ≤ k  n) — the permutation length and the decreasing coefficient.

Output
In a single line print n space-separated integers p1, p2, ..., pn — the permutation of length n with decreasing coefficient k.

If there are several permutations that meet this condition, print any of them. It is guaranteed that the permutation with the sought parameters exists.

Examples
inputCopy
5 2
outputCopy
1 5 2 4 3
inputCopy
3 0
outputCopy
1 2 3
inputCopy
3 2
outputCopy
3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	for(int i= 1 ;i<=n; i++){
	
	}
}