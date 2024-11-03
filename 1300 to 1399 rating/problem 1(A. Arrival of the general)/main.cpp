// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> heights(n);  // Properly initialize the vector with size n
    for(int i = 0 ; i < n ; i++){
        cin >> heights[i];
    }
 
    // now we have the heights
    // let's find the earliest occurrence of the max height
    // and the farthest occurrence of the minimum height
    int max_index = 0;
    int min_index = 0;
    int maxh = heights[0];
    int minh = heights[0];
 
    // let's first find the max element and min element
    for(int i = 0; i < n; i++){
        if(heights[i] > maxh) {
            maxh = heights[i];
            max_index = i;  // updating max_index to the earliest max height
        }
        if(heights[i] < minh) {
            minh = heights[i];
            min_index = i;  // updating min_index to the farthest min height
        }
    }
 
    // now we have the min and the max heights with us
    // let's calculate the earliest occurrence of the max height
    for(int i = 0; i < n; i++){
        if(heights[i] == maxh){
            max_index = i;
            break;  // break at the earliest occurrence
        }
    }
 
    for(int i = n - 1; i >= 0; i--){
        if(heights[i] == minh){
            min_index = i;
            break;  // break at the farthest occurrence
        }
    }
 
    // now we have the required indexes with us
    if(max_index < min_index) {
        cout << max_index + (n - 1 - min_index) << endl;
    } else {
        cout << max_index + (n - 1 - min_index) - 1 << endl;
    }
 
    return 0;
}