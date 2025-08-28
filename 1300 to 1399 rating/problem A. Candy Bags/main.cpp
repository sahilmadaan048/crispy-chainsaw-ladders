/*
A. Candy Bags
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Gerald has n younger brothers and their number happens to be even. One day he bought n2 candy bags. One bag has one candy, one bag has two candies, one bag has three candies and so on. In fact, for each integer k from 1 to n2 he has exactly one bag with k candies.

Help him give n bags of candies to each brother so that all brothers got the same number of candies.

Input
The single line contains a single integer n (n is even, 2 ≤ n ≤ 100) — the number of Gerald's brothers.

Output
Let's assume that Gerald indexes his brothers with numbers from 1 to n. You need to print n lines, on the i-th line print n integers — the numbers of candies in the bags for the i-th brother. Naturally, all these numbers should be distinct and be within limits from 1 to n2. You can print the numbers in the lines in any order.

It is guaranteed that the solution exists at the given limits.

Examples
inputCopy
2
outputCopy
1 4
2 3
Note
The sample shows Gerald's actions if he has two brothers. In this case, his bags contain 1, 2, 3 and 4 candies. He can give the bags with 1 and 4 candies to one brother and the bags with 2 and 3 to the other brother.


*/
#include <iostream>
#include <vector>
using namespace std;

void distribute_candies(int n) {
    int total_bags = n * n;
    vector<vector<int>> result(n, vector<int>(n));

    int left = 1;
    int right = total_bags;

    for (int i = 0; i < n; ++i) {
         for (int j = 0; j < n / 2; ++j) {
             result[i][j * 2] = left++; 
           	result[i][j * 2 + 1] = right--;
         }
     }
 
    for (int i = 0; i < n; ++i) { 
        for (int j = 0; j < n; ++j) { 
            cout << result[i][j] << " "; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    distribute_candies(n);
    return 0;
}
