// https://codeforces.com/problemset/problem/266/B

#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
 
    for (int time = 0; time < t; ++time) {
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                // Skip the next character as it's now part of a swapped pair
                i++;
            }
        }
    }
 
    cout << s << endl;
    return 0;
}