// https://codeforces.com/contest/330/submission/264625543
 
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
