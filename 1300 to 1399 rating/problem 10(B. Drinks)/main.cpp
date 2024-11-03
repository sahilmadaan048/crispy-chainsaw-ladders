// https://codeforces.com/problemset/problem/200/B

 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;  // taking the size input
 
    vector<int> heights(n);
    double sum = 0;
 
    for(int i = 0; i < n; i++) {  // taking the vector input
        cin >> heights[i]; 
        sum += heights[i];
    }
 
    double average = sum / n;
 
    // using iomanip for precise formatting
    cout << fixed << setprecision(10) << average << endl;
 
    return 0;
}