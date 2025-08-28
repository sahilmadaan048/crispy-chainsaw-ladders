// https://codeforces.com/problemset/problem/327/A

// https://codeforces.com/problemset/problem/327/A


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxOnes = 0;

    // Iterate through all possible segments [i, j]
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cnt = 0;

            // Calculate the number of ones after flipping the segment [i, j]
            for (int k = 0; k < n; k++) {
                if (k >= i && k <= j) {
                    // k is in the range [i, j], flip it
                    cnt += (1 - a[k]); // if a[k] is 1, it becomes 0; if a[k] is 0, it becomes 1
                } else {
                    // k is outside the range, just add its value
                    cnt += a[k];
                }
            }

            // Update maximum number of ones found
            maxOnes = max(maxOnes, cnt);
        }
    }

    cout << maxOnes << "\n";
    return 0;
}