/*
B. Present from Lena
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya's birthday is approaching and Lena decided to sew a patterned handkerchief to him as a present. Lena chose digits from 0 to n as the pattern. The digits will form a rhombus. The largest digit n should be located in the centre. The digits should decrease as they approach the edges. For example, for n = 5 the handkerchief pattern should look like that


          0
        0 1 0
      0 1 2 1 0
    0 1 2 3 2 1 0
  0 1 2 3 4 3 2 1 0
0 1 2 3 4 5 4 3 2 1 0
  0 1 2 3 4 3 2 1 0
    0 1 2 3 2 1 0
      0 1 2 1 0
        0 1 0
          0

Your task is to determine the way the handkerchief will look like by the given n.

Input
The first line contains the single integer n (2 ≤ n ≤ 9).

Output
Print a picture for the given n. You should strictly observe the number of spaces before the first digit on each line. Every two adjacent digits in the same line should be separated by exactly one space. There should be no spaces after the last digit at the end of each line.

Examples
inputCopy
2
outputCopy
    0
  0 1 0
0 1 2 1 0
  0 1 0
    0
inputCopy
3
outputCopy
      0
    0 1 0
  0 1 2 1 0
0 1 2 3 2 1 0
  0 1 2 1 0
    0 1 0
      0
*/

// #include<bits/stdc++.h>
// using namespace std;

// void print9(int n){
//         //priting spaces
//     for(int i =0  ; i<n;i++){
//         for(int j = 0 ; j<(n-i);j++){
//             cout<<" ";
//         }

//         //printing stars
//         for(int j=1;j<=(2*i+1);j++){
//             cout<<(j-1) << " ";
//         }

//         //printing spaces agwain
//         for(int j = 0 ; j<(n-i);j++){
//             cout<<" ";
//         }
//     cout<<endl;
//     }

//             //priting spaces
//     for(int i =0  ; i<n;i++){
//         for(int j = 0 ; j<i+1;j++){
//             cout<<" ";
//         }

//         //printing stars
//         for(int j=1;j<=(2*n-2*i-1);j++){
//             cout<< (j-1) << " " ;
//         }

//         //printing spaces agwain
//         for(int j = 0 ; j<i+1;j++){
//             cout<<" ";
//         } 
//     cout<<endl;
// }
// }

// int main(){
// 	int n;
// 	cin >> n;

// 	print9(n);
// }	


#include <iostream>
using namespace std;

void printPattern(int n) {
    int width = 2 * n + 1; // The width of the pattern

    // Upper part including the middle row
    for (int i = 0; i <= n; ++i) {
        // Print leading spaces
        for (int j = 0; j < n - i; ++j) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; ++j) {
            if (j != 0) cout << " ";
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 0; --j) {
            cout << " " << j;
        }

        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 0; --i) {
        // Print leading spaces
        for (int j = 0; j < n - i; ++j) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 0; j <= i; ++j) {
            if (j != 0) cout << " ";
            cout << j;
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 0; --j) {
            cout << " " << j;
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}
