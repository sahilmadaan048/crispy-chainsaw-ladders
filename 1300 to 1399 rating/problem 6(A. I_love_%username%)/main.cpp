// // https://codeforces.com/problemset/problem/155/A

 
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
 
    int amazing_count = 0;
    int max_score = scores[0];
    int min_score = scores[0];
 
    for (int i = 1; i < n; ++i) {
        if (scores[i] > max_score) {
            max_score = scores[i];
            amazing_count++;
        } else if (scores[i] < min_score) {
            min_score = scores[i];
            amazing_count++;
        }
    }
 
    cout << amazing_count << endl;
 
    return 0;
}