/*
───▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄───
───█▒▒░░░░░░░░░▒▒█───
────█░░█░░░░░█░░█────
─▄▄──█░░░▀█▀░░░█──▄▄─
█░░█─▀▄░░░░░░░▄▀─█░░█

Author- Sahil Madaan

*/



//number of minimum moves we need to remove to make it a palindrome

//if the number of moves come out to be 0 ,2 , 4, 6...print First

//else print Second

//this is the simple problem we have to do 

// #include<bits/stdc++.h>
// using namespace std;

// int minDeletionsToPalindrome(string s, int start, int end) {
//     // Base case: if the string is empty or a single character
//     if (start >= end) return 0;

//     // If characters at start and end are the same
//     if (s[start] == s[end]) {
//         return minDeletionsToPalindrome(s, start + 1, end - 1);
//     } else {
//         // If characters at start and end are different
//         int deleteStart = minDeletionsToPalindrome(s, start + 1, end);
//         int deleteEnd = minDeletionsToPalindrome(s, start, end - 1);
//         return 1 + min(deleteStart, deleteEnd);
//     }
// }

// int main(){
// 	string s;
// 	cin >> s;

// 	int count ;
// 	int n = s.length();
// 	count =  minDeletionsToPalindrome(s, 0, n - 1);

// 	if(!(count & 1) == 1) cout << "First" << endl;
// 	else cout << "Second" << endl;
// 	return 0 ;
// }

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
