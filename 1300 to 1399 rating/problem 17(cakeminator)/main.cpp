/*
A. Cakeminator
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a rectangular cake, represented as an r × c grid. Each cell either has an evil strawberry, or is empty. For example, a 3 × 4 cake may look as follows:


The cakeminator is going to eat the cake! Each time he eats, he chooses a row or a column that does not contain any evil strawberries and contains at least one cake cell that has not been eaten before, and eats all the cake cells there. He may decide to eat any number of times.

Please output the maximum number of cake cells that the cakeminator can eat.

Input
The first line contains two integers r and c (2 ≤ r, c ≤ 10), denoting the number of rows and the number of columns of the cake. The next r lines each contains c characters — the j-th character of the i-th line denotes the content of the cell at row i and column j, and is either one of these:

'.' character denotes a cake cell with no evil strawberry;
'S' character denotes a cake cell with an evil strawberry.
Output
Output the maximum number of cake cells that the cakeminator can eat.

Examples
inputCopy
3 4
S...
....
..S.
outputCopy
8
Note
For the first example, one possible way to eat the maximum number of cake cells is as follows (perform 3 eats).




*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int r, c;
// 	cin >> r >> c;
// 	vector<vector<int>> cake(r, vector<int>(c));

// 	// set<pair<int, int>> check;
// 	unordered_set<int> check1; //for rows
// 	unordered_set<int> check2; //for columns

// 	for(int i  = 0; i <r ; i ++){
// 		// int count = 0 ;
// 		for(int j = 0 ; j< c ; j++){
// 			cin >> cake[i][j] ; 
// 			if(cake[i][j] != 'S'){
// 				check1.insert(i);
// 				check2.insert(j);
// 			}

// 				// check.insert({i,j});
// 			// }else{
// 			// 	check.insert({i,j});
// 			// }

// 		}
// 	} 



// 	int count= 0 ;

// 	for(int i = 0 ; i< r ; i++){
// 		if(check1.find(i) != check1.end()){
// 			for(int j = 0 ; j< c ; j++){
// 				if(check2.find(j) != check2.end()){
// 					count++;
// 				}
// 				if(check1.find(i) != check1.end()  && check2.find(j) != check2.end()){
// 					count--;
// 				}
// 			}
// 		}
// 	}
// 	cout << count ; 

// 	//we have taken the cake input 

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> cake(r, vector<char>(c));

    unordered_set<int> rowsWithStrawberries; // for rows containing 'S'
    unordered_set<int> colsWithStrawberries; // for columns containing 'S'

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> cake[i][j];
            if (cake[i][j] == 'S') {
                rowsWithStrawberries.insert(i);
                colsWithStrawberries.insert(j);
            }
        }
    }

    int count = 0;

    // Count cake cells in rows without 'S'
    for (int i = 0; i < r; ++i) {
        if (rowsWithStrawberries.find(i) == rowsWithStrawberries.end()) {
            count += c;
        }
    }

    // Count cake cells in columns without 'S', excluding already counted cells
    for (int j = 0; j < c; ++j) {
        if (colsWithStrawberries.find(j) == colsWithStrawberries.end()) {
            for (int i = 0; i < r; ++i) {
                if (rowsWithStrawberries.find(i) != rowsWithStrawberries.end()) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
