#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int n, m, k;
int a, b;

// Using 1-based indexing for convenience
vector<vector<int>> d, v;

bool solve(int x, int y, int k) {
    int l = max(1, x - k);
    int r = min(x + k, n);
    for (int i = l; i <= r; ++i) {
        int t = k - abs(i - x);
        if (y - t > 0 && !v[i][y - t]) {
            a = i; b = y - t;
            return true;
        }
        if (y + t <= m && !v[i][y + t]) {
            a = i; b = y + t;
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;

    // Initialize 2D vectors with size (n+1)x(m+1) for 1-based indexing
    d.assign(n + 1, vector<int>(m + 1, 0));
    v.assign(n + 1, vector<int>(m + 1, 0));

    for (int t = 0; t < k; ++t) {
        int x, y;
        cin >> x >> y;

        for (int i = -2; i <= 2; ++i) {
            for (int j = -2; j <= 2; ++j) {
                int xi = x + i, yj = y + j;
                if (xi < 1 || xi > n || yj < 1 || yj > m) continue;
                d[x][y] = max(d[x][y], d[xi][yj] - abs(i) - abs(j));
            }
        }

        while (!solve(x, y, d[x][y])) {
            d[x][y]++;
        }

        cout << a << " " << b << "\n";
        v[a][b] = 1;
    }
}
