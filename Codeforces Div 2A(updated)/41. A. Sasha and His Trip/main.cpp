// https://codeforces.com/problemset/problem/1113/A


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, v;
    cin >> n >> v;

    int cost = 0;
    int temp = min(v, n - 1); // Buy only the needed fuel at the start
    cost += temp; // Initial cost
    int id = 1;

    while (id + temp < n) { // While we have not reached `n`
        cost += (id + 1); // Buy 1 liter at station (id + 1)
        temp++; // Increase fuel
        id++; // Move to next station
    }

    cout << cost << endl;
}

int main() {
    solve();
    return 0;
}



 