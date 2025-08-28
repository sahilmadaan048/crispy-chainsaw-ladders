/*

A. Dima and Friends
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Dima and his friends have been playing hide and seek at Dima's place all night. As a result, Dima's place got messy. In the morning they decided that they need to clean the place.

To decide who exactly would clean the apartment, the friends want to play a counting-out game. First, all the guys stand in a circle, and then each of them shows some number of fingers on one hand (one to five), and then the boys count in a circle, starting from Dima, the number of people, respective to the total number of fingers shown. The person on who the countdown stops will clean the apartment.

For example, if Dima and one of his friends played hide and seek, and 7 fingers were shown during the counting-out, then Dima would clean the place. If there were 2 or say, 8 fingers shown, then his friend would clean the place.

Dima knows how many fingers each of his friends will show during the counting-out. Now he is interested in the number of ways to show some number of fingers on one hand (one to five), so that he did not have to clean the place. Help Dima.

Input
The first line contains integer n (1 ≤ n ≤ 100) — the number of Dima's friends. Dima himself isn't considered to be his own friend. The second line contains n positive integers, not exceeding 5, representing, how many fingers the Dima's friends will show.

The numbers in the lines are separated by a single space.

Output
In a single line print the answer to the problem.

Examples
inputCopy
1
1
outputCopy
3
inputCopy
1
2
outputCopy
2
inputCopy
2
3 5
outputCopy
3
Note
In the first sample Dima can show 1, 3 or 5 fingers. If Dima shows 3 fingers, then the counting-out will go like that: Dima, his friend, Dima, his friend.

In the second sample Dima can show 2 or 4 fingers.

*/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, n;
//     cin >> a >> b >> n;
//     string number = to_string(a);

//     for (int i = 0; i < n; ++i) {
//         bool found = false;
//         for (int digit = 0; digit <= 9; ++digit) {
//             string temp = number + to_string(digit);
//             if (stoll(temp) % b == 0) {
//                 number = temp;
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << -1 << endl;
//             return 0;
//         }
//     }

//     cout << number << endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, n;
//     cin >> a >> b >> n;
//     string number = to_string(a);

//     bool found = false;
//     for (int digit = 0; digit <= 9; ++digit) {
//         string temp = number + to_string(digit);
//         if (stoll(temp) % b == 0) {
//             number = temp;
//             found = true;
//             break;
//         }
//     }

//     if (!found) {
//         cout << -1 << endl;
//         return 0;
//     }

//     // Append `n-1` zeros to the number
//     number += string(n - 1, '0');

//     cout << number << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a, b, n;
//     cin >> a >> b >> n;
//     string number = to_string(a);

//     bool found;
//     for (int i = 0; i < n; ++i) {
//         found = false;
//         for (int digit = 0; digit <= 9; ++digit) {
//             string temp = number + to_string(digit);
//             if (stoll(temp) % b == 0) {
//                 number = temp;
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             cout << -1 << endl;
//             return 0;
//         }
//     }

//     cout << number << endl;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n; 

	//so the total number of peope in the circle are n-+1

	int sum = 0;
	for(int i = 0 ; i< n ; i++){
		int x;
		cin >> x;
		sum += x;
	}
	int ans = 0 ;

	for(int i= 1; i<=5 ; i++){
		if((i+sum)%(n+1) != 1 ){
			ans++ ;  //no of ways batani hain i was doing something else earlier
		}
	}	
	cout << ans ; 
}