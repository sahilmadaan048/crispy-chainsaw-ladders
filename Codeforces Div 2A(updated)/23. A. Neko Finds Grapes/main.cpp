#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int c0 = 0, c1 = 0, k0 = 0, k1 = 0;
    
    for (int x : a) 
        (x % 2 == 0) ? ++c0 : ++c1;

    for (int x : b) 
        (x % 2 == 0) ? ++k0 : ++k1;

    cout << min(c1, k0) + min(c0, k1) << "\n";
    
    return 0;
}
