/*
A. Football
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

Input
The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

Output
Print "YES" if the situation is dangerous. Otherwise, print "NO".

Examples
inputCopy
001001
outputCopy
NO
inputCopy
1000000001
outputCopy
YES
*/


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// string s;
// cin >> s;

// int n = s.size();

// bool flag = false;
// int count = 1;
// for(int i = 1; i< n ; i++){
// 	if(s[i] == s[i-1]){
// 		count ++ ;
// 	}
// 	if(count>=7){
// 	flag = true ;
// 	break ;
// 	}
// 	else count = 1;
// }

// if(flag) cout << "YES";
// else cout << "NO"; 
// }


// 1000000001
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    bool flag = false;
    int count = 1; // Initialize count to 1 as we're comparing with previous
    for(int i = 1; i < n ; i++){ // Start from 1 and iterate till n-1
        if(s[i] == s[i-1]){
            count++; // Increase count if current character is same as previous
        } else {
            count = 1; // Reset count if current character is different
        }
        if(count>=7){
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO"; 
}
