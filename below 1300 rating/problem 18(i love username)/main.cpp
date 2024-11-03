/*
A. I_love_%username%
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya adores sport programming. He can't write programs but he loves to watch the contests' progress. Vasya even has a favorite coder and Vasya pays special attention to him.

One day Vasya decided to collect the results of all contests where his favorite coder participated and track the progress of his coolness. For each contest where this coder participated, he wrote out a single non-negative number — the number of points his favorite coder earned in the contest. Vasya wrote out the points for the contest in the order, in which the contests run (naturally, no two contests ran simultaneously).

Vasya considers a coder's performance in a contest amazing in two situations: he can break either his best or his worst performance record. First, it is amazing if during the contest the coder earns strictly more points that he earned on each past contest. Second, it is amazing if during the contest the coder earns strictly less points that he earned on each past contest. A coder's first contest isn't considered amazing. Now he wants to count the number of amazing performances the coder had throughout his whole history of participating in contests. But the list of earned points turned out long and Vasya can't code... That's why he asks you to help him.

Input
The first line contains the single integer n (1 ≤ n ≤ 1000) — the number of contests where the coder participated.

The next line contains n space-separated non-negative integer numbers — they are the points which the coder has earned. The points are given in the chronological order. All points do not exceed 10000.

Output
Print the single number — the number of amazing performances the coder has had during his whole history of participating in the contests.

Examples
inputCopy
5
100 50 200 150 200
outputCopy
2
inputCopy
10
4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
outputCopy
4
Note
In the first sample the performances number 2 and 3 are amazing.

In the second sample the performances number 2, 4, 9 and 10 are amazing.
*/

// #include<bits/stdc++.h>
// using namespace std;

// bool condition1(vector<int> &nums , int index){
// 	int max_ele = nums[1];
// 	for(int i = 0' ; i<= index ; i++){
// 		max_ele = max(max_ele, nums[i]);
// 	}
// 	return (max_ele == nums[index]);
// }

// bool condition2(vector<int> &nums , int index){
// 	int min_ele = nums[1];
// 	for(int i = 0 ; i<= index ; i++){
// 		min_ele = min(min_ele, nums[i]);
// 	}
// 	return (min_ele == nums[index]);
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	cin.ignore();
// 	vector<int> scores(n) ;
// 	for(int i = 0 ; i< n ; ++i){
// 		cin >> scores[i];
// 	}	

// 	int count = 0 ;
// 	for(int i = 0 ; i< n ; i++){
// 		if(condition1(scores, i) || condition2(scores, i)){
// 			count ++;
// 		}
// 	}
// 	cout << count ;


// }


// #include<bits/stdc++.h>
// using namespace std;

// bool condition1(vector<int> &nums, int index) {
//     int max_ele = nums[index];
//     for (int i = 0; i < index; i++) {
//         max_ele = max(max_ele, nums[i]);
//     }
//     return max_ele == nums[index];
// }

// bool condition2(vector<int> &nums, int index) {
//     int min_ele = nums[index];
//     for (int i = 1; i < index; i++) {
//         min_ele = min(min_ele, nums[i]);
//     }
//     return min_ele == nums[index];
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> scores(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> scores[i];
//     }

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (condition1(scores, i) || condition2(scores, i)) {
//             count++;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int amazing_count = 0;
    int max_score = scores[0];
    int min_score = scores[0];

    for (int i = 1; i < n; ++i) {
        if (scores[i] > max_score) {
            max_score = scores[i];
            amazing_count++;
        } else if (scores[i] < min_score) {
            min_score = scores[i];
            amazing_count++;
        }
    }

    cout << amazing_count << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool condition1(vector<int> &nums, int index) {
//     int max_ele = nums[index];
//     for (int i = 0; i < index; i++) { // Corrected loop bound
//         max_ele = max(max_ele, nums[i]);
//     }
//     return max_ele == nums[index];
// }

// bool condition2(vector<int> &nums, int index) {
//     int min_ele = nums[index];
//     for (int i = 0; i < index; i++) { // Corrected loop bound
//         min_ele = min(min_ele, nums[i]);
//     }
//     return min_ele == nums[index];
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> scores(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> scores[i];
//     }

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (condition1(scores, i) || condition2(scores, i)) {
//             count++;
//         }
//     }
//     cout << count << endl;

//     return 0;
// }
