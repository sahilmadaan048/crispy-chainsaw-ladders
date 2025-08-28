// https://codeforces.com/problemset/problem/950/A 


#include <iostream>
using namespace std;

void solve() {
    int l, r, a;
    cin >> l >> r >> a;
    if (l > r) swap(l, r);
    int minNeeded = r - l;
    int used = min(a, minNeeded);
    l += used;
    a -= used;

    l += a / 2;
    r += a / 2;

    cout << 2 * min(l, r) << endl;
}

int main() {
    solve();
    return 0;
}
