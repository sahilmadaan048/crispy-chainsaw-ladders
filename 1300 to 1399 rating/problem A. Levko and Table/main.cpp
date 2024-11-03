/*
A. Levko and Table
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Levko loves tables that consist of n rows and n columns very much. He especially loves beautiful tables. A table is beautiful to Levko if the sum of elements in each row and column of the table equals k.

Unfortunately, he doesn't know any such table. Your task is to help him to find at least one of them.

Input
The single line contains two integers, n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 1000).

Output
Print any beautiful table. Levko doesn't like too big numbers, so all elements of the table mustn't exceed 1000 in their absolute value.

If there are multiple suitable tables, you are allowed to print any of them.

Examples
inputCopy
2 4
outputCopy
1 3
3 1
inputCopy
4 7
outputCopy
2 1 0 4
4 0 2 1
1 3 3 0
0 3 2 2
Note
In the first sample the sum in the first row is 1 + 3 = 4, in the second row — 3 + 1 = 4, in the first column — 1 + 3 = 4 and in the second column — 3 + 1 = 4. There are other beautiful tables for this sample.

In the second sample the sum of elements in each row and each column equals 7. Besides, there are other tables that meet the statement requirements.


*/

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     vector<vector<int>> a(n, vector<int>(n));

//     // Fill the diagonal with k and the rest with 0
//     for (int i = 0; i < n; ++i) {
//         a[i][i] = k;
//     }

//     // Print the matrix
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, k;
// 	cin >> n >> k ;

// 	vector<vector<int> > a(n, vector<int>(n));

// 	for(int i = 0 ;i< n ; i++){
// 		int sum_row = 0 ;
// 		int sum_col = 0 ;
// 		for(int j = 0 ;j< n ; j++){
// 			sum_row += a[i][j];  //each row sum found
// 			sum_col += a[j][i];  //each column sum found
// 			for(int i=1;i<=k ; i++){
// 				if(sum_row == sum_col == k){
// 					a[i][j] = k ;
// 				}
// 			}
// 		}
// 	}

// 	//printing the modified matrix
// 	for(auto &row : a){
// 		for(auto &ele : row){
// 			cout << ele <<  " ";
// 		}
// 		cout << endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, k;
// 	cin >> n >> k ;

// 	int total_sum = k*n;

// 	vector<vector<int> > a(n, vector<int>(n));

// 	for(int p = 1; p<= k; p++){
// 		int row_sum = 0 ;
// 		int col_sum = 0 ;
// 		for(int i= 0 ;i< n ;i++){
// 			for(int j =0; j< n; j++){
// 				a[i][j] = p;
// 				--total_sum ;
// 				if(total_sum == 0){
// 					break;
// 				}
// 				if(row_sum == col_sum == k){
// 					a[i][j] = p ;
// 				}
// 			}
// 			if(total_sum == 0){
// 				break;
// 			}
// 		}
// 	}
// 	//printing the modified matrix
// 	for(auto &row : a){
// 		for(auto &ele : row){
// 			cout << ele <<  " ";
// 		}
// 		cout << endl;
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     // Initialize the matrix with zeros
//     vector<vector<int>> a(n, vector<int>(n, 0));

//     // Calculate the total sum needed for each row/column
//     int totalSum = k * n;

//     // Fill the matrix with increasing numbers from 1 to k
//     for (int p = 1; p <= k; ++p) {
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 a[i][j] = p;
//                 --totalSum; // Decrease the total sum after placing a number
//                 if (totalSum == 0) { // Once the total sum reaches zero, stop filling
//                     break;
//                 }
//             }
//             if (totalSum == 0) { // Stop filling once the total sum reaches zero
//                 break;
//             }
//         }
//     }

//     // Printing the modified matrix
//     for (auto &row : a) {
//         for (auto &ele : row) {
//             cout << ele << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int n, k;
//     cin >> n >> k;

//     // Step 1: Calculate the average value for each cell
//     int avg = k / n;

//     // Step 2: Initialize the matrix with zeros
//     vector<vector<int>> table(n, vector<int>(n, 0));

//     // Step 3: Distribute the numbers from 1 to k across the matrix
//     int num = 1;
//     bool found = false;
//     for (int i = 0; i < n &&!found; ++i) {
//         for (int j = 0; j < n &&!found; ++j) {
//             table[i][j] = num++;
//             if (num > k) {
//                 found = true;
//             }
//         }
//     }

//     // Adjust the last row and column if necessary
//     if ( found) {
//         for (int i = 0; i < n; ++i) {
//             table[n - 1][i] = k - avg + 1;
//             table[i][n - 1] = k - avg + 1;
//         }
//     } else {
//         // If we couldn't distribute the numbers evenly, print an error message
//         cout << "Cannot create a beautiful table." << endl;
//         return 0;
//     }

//     // Output the table
//     for (const auto& row : table) {
//         for (const auto& elem : row) {
//             cout << elem << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, k;
// 	cin >> n, k;
// 	vector<vector<int>> temp(n, vector<int>(n));

// 	//this will make the array of nxn initisalised with
// 	//all zeroes
// 	for(int i =0; i<=k ; i++){
// 		// temp(n, vector<int>(n), i)
// 		for(int j=0 ;j<n ; j++){
// 			int sum_r = 0 ;
// 			int sum_c = 0 ;
// 			for(int p = 0 ;p<n ; p++){
// 				// temp[i][p] = i;
// 				sum_r += temp[i][j];
// 				sum_c += temp[j][i];
// 				if(sum_r == k && sum_c == k){
// 					temp[i][j] = i ;
// 				}
// 			}
// 		}

// 	}
	
// 	//priniting the modified array
// 	for(auto &row : temp){
// 		for(auto &ele : row){
// 			cout << ele << " ";
// 		}
// 		cout << endl;
// 	}
// }



// #include <bits/stdc++.h>

// using namespace std;

// int n, k;

// int main() {
//   scanf("%d %d", &n, &k);
//   for(int i = 0; i < n; ++i, puts(""))
//     for(int j = 0; j < n; ++j)
//       if(i == j)
//         printf("%d ", k);
//       else
//         printf("0 ");

//   return 0;
// }

#include<bits/dtc++.h>
using namespace std;

int main(){
	int 
}