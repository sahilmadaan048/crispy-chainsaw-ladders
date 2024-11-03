// https://codeforces.com/problemset/problem/459/B


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    vector<int> b(n);
    
    // Reading input and finding the minimum and maximum values
    int minBeauty = INT_MAX, maxBeauty = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] < minBeauty) {
            minBeauty = b[i];
        }
        if (b[i] > maxBeauty) {
            maxBeauty = b[i];
        }
    }
 
    // Calculate the maximum beauty difference
    int maxBeautyDifference = maxBeauty - minBeauty;
 
    // Count the occurrences of minBeauty and maxBeauty
    long long minCount = 0, maxCount = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == minBeauty) {
            minCount++;
        }
        if (b[i] == maxBeauty) {
            maxCount++;
        }
    }
 
    // Calculate the number of ways to choose the pairs
    long long ways;
    if (maxBeautyDifference == 0) {
        // All flowers have the same beauty number
        ways = (n * (n - 1)) / 2;
    } else {
        ways = minCount * maxCount;
    }
 
    cout << maxBeautyDifference << " " << ways << endl;
    return 0;
}