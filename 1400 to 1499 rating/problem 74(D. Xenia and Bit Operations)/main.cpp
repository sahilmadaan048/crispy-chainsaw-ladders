// https://codeforces.com/problemset/problem/339/D



#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1 << 17; // 2^17 is the max size (since n <= 17)
int tree[4 * MAXN];
int a[MAXN];

// Build Segment Tree
void build(int node, int start, int end, int level) {
    if (start == end) {
        tree[node] = a[start];
    } else {
        int mid = (start + end) / 2;
        build(node * 2, start, mid, level - 1);
        build(node * 2 + 1, mid + 1, end, level - 1);
        if (level % 2 == 1) // odd level -> OR
            tree[node] = tree[node * 2] | tree[node * 2 + 1];
        else // even level -> XOR
            tree[node] = tree[node * 2] ^ tree[node * 2 + 1];
    }
}

// Update segment tree
void update(int node, int start, int end, int idx, int val, int level) {
    if (start == end) {
        tree[node] = val;
    } else {
        int mid = (start + end) / 2;
        if (idx <= mid) 
            update(node * 2, start, mid, idx, val, level - 1);
        else 
            update(node * 2 + 1, mid + 1, end, idx, val, level - 1);

        if (level % 2 == 1) 
            tree[node] = tree[node * 2] | tree[node * 2 + 1];
        else 
            tree[node] = tree[node * 2] ^ tree[node * 2 + 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int N = 1 << n; // size of array

    for (int i = 1; i <= N; i++) cin >> a[i];

    build(1, 1, N, n);

    while (m--) {
        int p, b;
        cin >> p >> b;
        update(1, 1, N, p, b, n);
        cout << tree[1] << "\n"; // root has the answer
    }

    return 0;
}
