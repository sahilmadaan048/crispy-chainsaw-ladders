/*
A. System of Equations
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Furik loves math lessons very much, so he doesn't attend them, unlike Rubik. But now Furik wants to get a good mark for math. For that Ms. Ivanova, his math teacher, gave him a new task. Furik solved the task immediately. Can you?

You are given a system of equations:


You should count, how many there are pairs of integers (a, b) (0 ≤ a, b) which satisfy the system.

Input
A single line contains two integers n, m (1 ≤ n, m ≤ 1000) — the parameters of the system. The numbers on the line are separated by a space.

Output
On a single line print the answer to the problem.

Examples
inputCopy
9 3
outputCopy
1
inputCopy
14 28
outputCopy
1
inputCopy
4 20
outputCopy
0
Note
In the first sample the suitable pair is integers (3, 0). In the second sample the suitable pair is integers (3, 5). In the third sample there is no suitable pair.
*/


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, m;
// 	cin >>n >> m;
// 	cin.ignore();
// 	if(n == m) {
// 		cout << "1002" << endl ;
// 		return 0 ;
// 	}
// 	else if()
// }

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count = 0;

    // Iterate over all possible values for a and b
    for (int a = 0; a <= 1000; a++) {
        for (int b = 0; b <= 1000; b++) {
            // Check if the pair (a, b) satisfies both equations
            if ((a * a + b == n) && (a + b * b == m)) {
                count++;
            }
        }
    }

    // Output the number of valid pairs
    cout << count << endl;

    return 0;
}
