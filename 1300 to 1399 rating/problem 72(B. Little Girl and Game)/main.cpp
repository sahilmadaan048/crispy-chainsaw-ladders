// https://codeforces.com/problemset/problem/276/B

 
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    int cnt[26] = {0}; // Initialize array to zero
    
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        cnt[s[i] - 'a']++;
    }
 
    int odd = 0;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] & 1) { // Check if count is odd
            odd++;
        }
    }
 
    if ((odd == 0) || (odd & 1)) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
 
    return 0;
}