#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int required = (n + 1) / 2; // ceil(n/2)
    
    for (int d = -1000; d <= 1000; d++) {
        if (d == 0) continue; // d must be non-zero
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ((double)a[i] / d > 0) {
                count++;
            }
        }	
        if (count >= required) {
            cout << d << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    return 0;
}
