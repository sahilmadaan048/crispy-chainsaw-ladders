#include <bits/stdc++.h>
using namespace std;

int countQAQ(string s) {
    int n = s.size();
    int totalQAQ = 0;
    int qCount = 0; // Count of 'Q' seen so far

    vector<int> leftQ(n, 0); // Prefix count of 'Q'
    vector<int> rightQ(n, 0); // Suffix count of 'Q'

    // Calculate prefix count of 'Q'
    for (int i = 0; i < n; i++) {
        if (s[i] == 'Q') qCount++;
        leftQ[i] = qCount;
    }

    qCount = 0; // Reset qCount for suffix count

    // Calculate suffix count of 'Q'
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'Q') qCount++;
        rightQ[i] = qCount;
    }

    // Count "QAQ" using prefix and suffix arrays
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            // The number of "QAQ" subsequences centered at 'A' is leftQ[i] * rightQ[i]
            totalQAQ += leftQ[i] * rightQ[i];
        }
    }

    return totalQAQ;
}

int main() {
    string s;
    cin >> s; // Input string

    cout << countQAQ(s) << endl; // Output the count of "QAQ" subsequences

    return 0;
}
