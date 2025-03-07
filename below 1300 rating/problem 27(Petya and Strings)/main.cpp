/*
A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	string s1, s2;
// 	cin >> s1 >> s2;
// 	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// 	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

// 	int size = s1.size();
// 	int sum1 = 0 , sum2 = 0;
// 	for(int i = 0 ; i< size ; i++){
// 		sum1 += (int)s1[i];
// 		sum2 += (int)s2[i]; 
// 	}

// 	if(sum1 == sum2) cout << "0";
// 	else if(sum1 < sum2) cout << "-1";
// 	else cout << "1";
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    // Convert both strings to lowercase
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    // Compare the strings lexicographically
    int result = s1.compare(s2);

    // Output the comparison result
    if(result < 0) {
        cout << "-1";
    } else if(result > 0) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}
