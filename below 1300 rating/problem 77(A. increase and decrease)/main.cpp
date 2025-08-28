// https://codeforces.com/problemset/problem/246/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the size of the array
    vector<int> arr(n);

    // Read the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the array elements
    int sum = accumulate(arr.begin(), arr.end(), 0);

    // If the sum is divisible by n, the result is n, otherwise it's n-1
    if (sum % n == 0) {
        cout << n << "\n";
    } else {
        cout << n - 1 << "\n";
    }

    return 0;
}
