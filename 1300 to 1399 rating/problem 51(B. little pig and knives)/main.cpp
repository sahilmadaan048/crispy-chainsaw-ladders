// https://codeforces.com/problemset/problem/116/B

#include <bits/stdc++.h>
using namespace std;

#define ff(i,a,b)      for(int i=a;i<b;i++)
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);

void solve() {
    int ans = 0;
    int n, m; 
    ci(n); ci(m);

    vector<vector<char>> x(n, vector<char>(m));
    
    ff(i, 0, n) {
        ff(j, 0, m) {
            ci(x[i][j]);
        }
    }

    ff(i, 0, n) {
        ff(j, 0, m) {
            if (x[i][j] == 'W') {
                if (i > 0 && x[i-1][j] == 'P') {
                    ans++;
                } else if (i < n-1 && x[i+1][j] == 'P') {
                    ans++;
                } else if (j > 0 && x[i][j-1] == 'P') {
                    ans++;
                } else if (j < m-1 && x[i][j+1] == 'P') {
                    ans++;
                }
            }
        }
    }
    
    cout << ans << "\n";
}

int main() {
    fast;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
