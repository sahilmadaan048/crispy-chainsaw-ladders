// https://codeforces.com/problemset/problem/75/A

/*
───▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄───
───█▒▒░░░░░░░░░▒▒█───
────█░░█░░░░░█░░█────
─▄▄──█░░░▀█▀░░░█──▄▄─
█░░█─▀▄░░░░░░░▄▀─█░░█

Author- Sahil Madaan

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s = to_string(c);
    string s3 = "";
    string s4 = "";
    string ss = "";

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != '0') {
            s3.push_back(s1[i]);
        }
    }

    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] != '0') {
            s4.push_back(s2[i]);
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            ss.push_back(s[i]);
        }
    }

    int d = stoi(s3);
    int e = stoi(s4);
    int f = stoi(ss);

    if (d + e == f) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}