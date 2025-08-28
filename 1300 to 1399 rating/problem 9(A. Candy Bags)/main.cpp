// https://codeforces.com/problemset/problem/334/A

#include <iostream>
#include <vector>
using namespace std;

void distribute_candies(int n) {
    int total_bags = n * n;
    vector<vector<int>> result(n, vector<int>(n));

    int left = 1;
    int right = total_bags;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            result[i][j * 2] = left++;
            result[i][j * 2 + 1] = right--;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    distribute_candies(n);
    return 0;
}