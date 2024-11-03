// https://codeforces.com/problemset/problem/102/B


// #include<bits/stdc++.h>
// using namespace std;

// int sod(int n) {
//     int sum = 0;
//     while(n) {
//         sum += (n % 10);
//         n /= 10;
//     }
//     return sum;
// }

// int solve(int n) {
//     if (n < 10) return 0;
//     return 1 + solve(sod(n));
// }

// int main() {
//     string s;
//     cin >> s;
//     int sum = 0;
//     for(char c : s) sum += c - '0';
    
//     if (sum < 10) cout << 0 << "\n";
//     else cout << solve(sum) + 1 << "\n";
    
//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(string num) {
    int sum = 0;
    for (char c : num) {
        sum += (c - '0');
    }
    return sum;
}

int transformToSingleDigit(string num) {
    int transformCount = 0;
    
    while (num.length() > 1) {
        int sum = sumOfDigits(num);
        num = to_string(sum);
        transformCount++;
    }
    
    return transformCount;
}

int main() {
    string number;
    cin >> number;

    int result = transformToSingleDigit(number);
    
    cout << result << endl;
    
    return 0;
}
