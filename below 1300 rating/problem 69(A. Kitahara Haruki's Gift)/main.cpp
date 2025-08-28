// https://codeforces.com/problemset/problem/433/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt100 = 0, cnt200 = 0;
    
    // Count the number of 100g and 200g watermelons
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 100) cnt100++;
        else cnt200++;
    }
    
    // The total weight of all watermelons should be even
    if ((cnt100 * 100 + cnt200 * 200) % 200 != 0) {
        cout << "NO\n";
    }
    // Check if we can divide them into two equal parts
    else {
        int halfWeight = (cnt100 * 100 + cnt200 * 200) / 2;
        
        // Check if we can form halfWeight using available 100g and 200g watermelons
        for (int i = 0; i <= cnt200 && i * 200 <= halfWeight; i++) {
            if ((halfWeight - i * 200) % 100 == 0 && (halfWeight - i * 200) / 100 <= cnt100) {
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
    }
    
    return 0;
}
