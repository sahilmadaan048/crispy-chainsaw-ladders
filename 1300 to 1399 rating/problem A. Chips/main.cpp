/*
A. Chips
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n walruses sitting in a circle. All of them are numbered in the clockwise order the walrus number 2 sits to the left of the walrus number 1, the walrus number 3 sits to the left of the walrus number 2, ..., the walrus number 1 sits to the left of the walrus number n.

The presenter has m chips. The presenter stands in the middle of the circle and starts giving the chips to the walruses starting from walrus number 1 and moving clockwise. The walrus number i gets i chips. If the presenter can't give the current walrus the required number of chips, then the presenter takes the remaining chips and the process ends. Determine by the given n and m how many chips the presenter will get in the end.

Input
The first line contains two integers n and m (1 ≤ n ≤ 50, 1 ≤ m ≤ 104) — the number of walruses and the number of chips correspondingly.

Output
Print the number of chips the presenter ended up with.

Examples
inputCopy
4 11
outputCopy
0
inputCopy
17 107
outputCopy
2
inputCopy
3 8
outputCopy
1
Note
In the first sample the presenter gives one chip to the walrus number 1, two chips to the walrus number 2, three chips to the walrus number 3, four chips to the walrus number 4, then again one chip to the walrus number 1. After that the presenter runs out of chips. He can't give anything to the walrus number 2 and the process finishes.

In the third sample the presenter gives one chip to the walrus number 1, two chips to the walrus number 2, three chips to the walrus number 3, then again one chip to the walrus number 1. The presenter has one chip left and he can't give two chips to the walrus number 2, that's why the presenter takes the last chip.


*/

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, m;
// 	cin >> n >> m;
// 	//where n i sthe number of walrussses and 
// 	//m is the number of chips the presenter has initially
// 	int sum = n ;
// 	while((sum % m)!= 0 && sum != 0){
// 		m -= sum;
// 		if(sum > 1) sum-=1;
// 		// sum -= 1;/
// 	}
// 	cout << m << endl ;

// }

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    // n is the number of walruses
    // m is the number of chips the presenter has initially
    
    int current_walrus = 1; // Start giving chips from walrus number 1
    
    while (m >= current_walrus) {
        m -= current_walrus; // Give 'current_walrus' chips to the current walrus
        current_walrus++; // Move to the next walrus
        if (current_walrus > n) {
            current_walrus = 1; // If we've given chips to the last walrus, start from the first walrus again
        }
    }
    
    cout << m << endl; // The remaining chips that the presenter ends up with
    
    return 0;
}
