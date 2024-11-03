/*
A. Cupboards
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
One foggy Stockholm morning, Karlsson decided to snack on some jam in his friend Lillebror Svantenson's house. Fortunately for Karlsson, there wasn't anybody in his friend's house. Karlsson was not going to be hungry any longer, so he decided to get some food in the house.

Karlsson's gaze immediately fell on n wooden cupboards, standing in the kitchen. He immediately realized that these cupboards have hidden jam stocks. Karlsson began to fly greedily around the kitchen, opening and closing the cupboards' doors, grab and empty all the jars of jam that he could find.

And now all jars of jam are empty, Karlsson has had enough and does not want to leave traces of his stay, so as not to let down his friend. Each of the cupboards has two doors: the left one and the right one. Karlsson remembers that when he rushed to the kitchen, all the cupboards' left doors were in the same position (open or closed), similarly, all the cupboards' right doors were in the same position (open or closed). Karlsson wants the doors to meet this condition as well by the time the family returns. Karlsson does not remember the position of all the left doors, also, he cannot remember the position of all the right doors. Therefore, it does not matter to him in what position will be all left or right doors. It is important to leave all the left doors in the same position, and all the right doors in the same position. For example, all the left doors may be closed, and all the right ones may be open.

Karlsson needs one second to open or close a door of a cupboard. He understands that he has very little time before the family returns, so he wants to know the minimum number of seconds t, in which he is able to bring all the cupboard doors in the required position.

Your task is to write a program that will determine the required number of seconds t.

Input
The first input line contains a single integer n — the number of cupboards in the kitchen (2 ≤ n ≤ 104). Then follow n lines, each containing two integers li and ri (0 ≤ li, ri ≤ 1). Number li equals one, if the left door of the i-th cupboard is opened, otherwise number li equals zero. Similarly, number ri equals one, if the right door of the i-th cupboard is opened, otherwise number ri equals zero.

The numbers in the lines are separated by single spaces.

Output
In the only output line print a single integer t — the minimum number of seconds Karlsson needs to change the doors of all cupboards to the position he needs.

Examples
inputCopy
5
0 1
1 0
0 1
1 1
0 1
outputCopy
3
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	cin.ignore();

// 	vector<vector<int>> temp(n, vector<int>(2));

// 	int ans_count = 0 ;

// 	for(int i = 0 ;i<n ; i++){
// 		cin >> temp[i][0] >> temp[i][1] ; 
// 	}

	

//     // Count the number of moves needed for left doors

//     int zero_count = 0;
//     for(int j = 0; j < n; j++){
//         if(temp[j][0] == 0) zero_count++;
//     }
//     ans_count += min(zero_count, n - zero_count); // Choose the minimum between open and closed doors

//     // Count the number of moves needed for right doors
//     zero_count = 0;
//     for(int j = 0; j < n; j++){
//         if(temp[j][1] == 0) zero_count++;
//     }
//     ans_count += min(zero_count, n - zero_count); // Choose the minimum between open and closed doors

//     cout << ans_count ;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> left(n);
    vector<int> right(n);

    // Read the cupboard door states
    for (int i = 0; i < n; i++) {
        cin >> left[i] >> right[i];
    }

    int left_open_count = 0, left_closed_count = 0;
    int right_open_count = 0, right_closed_count = 0;

    // Count the number of open and closed doors for both left and right sides
    for (int i = 0; i < n; i++) {
        if (left[i] == 0) {
            left_closed_count++;
        } else {
            left_open_count++;
        }

        if (right[i] == 0) {
            right_closed_count++;
        } else {
            right_open_count++;
        }
    }

    // Calculate the minimum moves needed to make all left doors the same and all right doors the same
    int left_moves = min(left_open_count, left_closed_count);
    int right_moves = min(right_open_count, right_closed_count);

    // The total moves required is the sum of the moves for the left and right doors
    int total_moves = left_moves + right_moves;

    cout << total_moves << endl;

    return 0;
}
