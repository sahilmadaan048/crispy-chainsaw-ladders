// /*
// B. Queue at the School
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

// Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

// You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.

// Input
// The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue and the time after which the queue will transform into the arrangement you need to find.

// The next line contains string s, which represents the schoolchildren's initial arrangement. If the i-th position in the queue contains a boy, then the i-th character of string s equals "B", otherwise the i-th character equals "G".

// Output
// Print string a, which describes the arrangement after t seconds. If the i-th position has a boy after the needed time, then the i-th character a must equal "B", otherwise it must equal "G".

// Examples
// inputCopy
// 5 1
// BGGBG
// outputCopy
// GBGGB
// inputCopy
// 5 2
// BGGBG
// outputCopy
// GGBGB
// inputCopy
// 4 1
// GGGB
// outputCopy
// GGGB

// */

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// // 	int n, m;
// // 	cin >> n >> m ;
// // 	string s;
// // 	cin >> s;

// // 	queue<char>q ;
// // 	for(auto &ele : s){
// // 		q.push(ele);
// // 	}

// // 	string result = "";
// // 	while(!q.empty()){
// // 		char top = q.front();
// // 		q.pop();
// // 		if(top == 'B' && !q.empty() && m>0){
// // 			if(q.front() == 'G'){
// // 				result.push_back('G');
// // 				m--;
// // 				q.pop();
// // 				q.push(top);
// // 			}
// // 			else{
// // 				result.push_back('B');
// // 			}
// // 		}else{
// // 			result.push_back(top);
// // 		}
// // 	}

// // 	cout << result ;
// // 	return 0 ;
// // }

// // #include <iostream>
// // #include <queue>
// // #include <string>

// // using namespace std;

// // int main() {
// //     int n, m;
// //     cin >> n >> m;
// //     string s;
// //     cin >> s;

// //     queue<char> q;
// //     for (auto &ele : s) {
// //         q.push(ele);
// //     }

// //     string result = "";
// //     while (!q.empty()) {
// //         char top = q.front();
// //         q.pop();
// //         if (top == 'B' && !q.empty() && m > 0) {
// //             if (q.front() == 'G') {
// //                 result.push_back('G');
// //                 q.pop();
// //                 m--;
// //             } else {
// //                 result.push_back('B');
// //             }
// //         } else {
// //             result.push_back(top);
// //         }
// //     }

// //     cout << result;
// //     return 0;
// // }


// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int n, m;
// //     cin >> n >> m; // Assuming these values are relevant to the problem statement, but they're not used in the original code.
// //     string s;
// //     cin >> s;

// //     queue<char> q;
// //     for (auto &ele : s) {
// //         q.push(ele);
// //     }

// //     string result = "";
// //     while (!q.empty()) {
// //         char top = q.front();
// //         q.pop();
// //         if (top == 'B') { // Simplified condition since we're only interested in 'B'
// //             if (!q.empty() && m > 0 && q.front() == 'G') { // Ensure queue is not empty and has 'G' at front
// //                 result.push_back('G'); // Replace 'B' with 'G'
// //                 m--; // Decrement m
// //                 q.pop(); // Remove 'G' from queue
// //                 q.push(top); // Push 'B' back into queue
// //             } else {
// //                 result.push_back('B'); // Keep 'B' if conditions not met
// //             }
// //         } else {
// //             result.push_back(top); // Non-'B' characters remain unchanged
// //         }
// //     }

// //     cout << result << endl; // Added newline for better readability
// //     return 0;
// // }


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int n, t;
//     cin >> n >> t;
//     string s;
//     cin >> s;

//     // Simulate the passage of time
//     for (int second = 0; second < t; ++second) {
//         bool swapped = false;
//         for (int i = 0; i < n - 1; ++i) {
//             // Check if current child is a boy and the next one is a girl
//             if (s[i] == 'B' && s[i + 1] == 'G') {
//                 // Swap them
//                 swap(s[i], s[i + 1]);
//                 swapped = true;
//             }
//         }
//         // If no swaps occurred in this second, stop early
//         if (!swapped) break;
//     }

//     cout << s << endl;
//     return 0;
// }


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
