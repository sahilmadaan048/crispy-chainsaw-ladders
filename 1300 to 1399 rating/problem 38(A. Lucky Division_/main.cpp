// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    string temp = to_string(n);
    for (auto ch : temp) {
        if (ch != '4' && ch != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool flag = false;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int temp1 = i;
            int temp2 = n / i;
            
            if (check(temp1) || check(temp2)) {
                flag = true;
                break;
            }
        }
    }

    if (flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
