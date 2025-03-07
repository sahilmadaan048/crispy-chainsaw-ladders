/*
A. Arrival of the General
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A Ministry for Defense sent a general to inspect the Super Secret Military Squad under the command of the Colonel SuperDuper. Having learned the news, the colonel ordered to all n squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in the order of non-increasing of their height. But as there's virtually no time to do that, the soldiers lined up in the arbitrary order. However, the general is rather short-sighted and he thinks that the soldiers lined up correctly if the first soldier in the line has the maximum height and the last soldier has the minimum height. Please note that the way other solders are positioned does not matter, including the case when there are several soldiers whose height is maximum or minimum. Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct and the sequence (4, 3, 1, 2, 2) wrong.

Within one second the colonel can swap any two neighboring soldiers. Help him count the minimum time needed to form a line-up which the general will consider correct.

Input
The first input line contains the only integer n (2 ≤ n ≤ 100) which represents the number of soldiers in the line. The second line contains integers a1, a2, ..., an (1 ≤ ai ≤ 100) the values of the soldiers' heights in the order of soldiers' heights' increasing in the order from the beginning of the line to its end. The numbers are space-separated. Numbers a1, a2, ..., an are not necessarily different.

Output
Print the only integer — the minimum number of seconds the colonel will need to form a line-up the general will like.

Examples
inputCopy
4
33 44 11 22
outputCopy
2
inputCopy
7
10 10 58 31 63 40 76
outputCopy
10
Note
In the first sample the colonel will need to swap the first and second soldier and then the third and fourth soldier. That will take 2 seconds. The resulting position of the soldiers is (44, 33, 22, 11).

In the second sample the colonel may swap the soldiers in the following sequence:

(10, 10, 58, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 40, 76)
(10, 58, 10, 31, 63, 76, 40)
(10, 58, 10, 31, 76, 63, 40)
(10, 58, 31, 10, 76, 63, 40)
(10, 58, 31, 76, 10, 63, 40)
(10, 58, 31, 76, 63, 10, 40)
(10, 58, 76, 31, 63, 10, 40)
(10, 76, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 10, 40)
(76, 10, 58, 31, 63, 40, 10)

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	vector<int> heights;
// 	for(int i= 0 ; i <n ; i++){
// 		cin >> heights[i];
// 	}

// 	//now we have the hrights
// 	//let's find oout the earliest occcurence of the max height

// 	//and the farthest occurenve if the minmum height
// 	int max_index = 0 ;
// 	int min_index = 0 ;
// 	int maxh = heights[0];
// 	int minh = heights[0]; 

// 	//let's first fung the max element and min element
// 	for(int i = 0; i< n ; i++){
// 		if(heights[i] > maxh) maxh = heights[i];
// 		if(heights[i] < minh) minh = heights[i];
// 	}

// //now we have the min and the max heights with us
// //let's calculate the earliest occurence of the max height

// for(int i = 0 ; i<n ; i++){
// 	if(heights[i] == maxh){
// 		max_index = i ;
// 	}

// 	if(heights[i] == minh) min_index = i ;
// }

// //now we have the required indexes with us

// if(max_index < min_index) cout << (max_index) + (n-min_index) ;

// else cout << (max_index) + (n-min_index) -1; 

// return 0 ;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> heights(n);  // Properly initialize the vector with size n
    for(int i = 0 ; i < n ; i++){
        cin >> heights[i];
    }

    // now we have the heights
    // let's find the earliest occurrence of the max height
    // and the farthest occurrence of the minimum height
    int max_index = 0;
    int min_index = 0;
    int maxh = heights[0];
    int minh = heights[0];

    // let's first find the max element and min element
    for(int i = 0; i < n; i++){
        if(heights[i] > maxh) {
            maxh = heights[i];
            max_index = i;  // updating max_index to the earliest max height
        }
        if(heights[i] < minh) {
            minh = heights[i];
            min_index = i;  // updating min_index to the farthest min height
        }
    }

    // now we have the min and the max heights with us
    // let's calculate the earliest occurrence of the max height
    for(int i = 0; i < n; i++){
        if(heights[i] == maxh){
            max_index = i;
            break;  // break at the earliest occurrence
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(heights[i] == minh){
            min_index = i;
            break;  // break at the farthest occurrence
        }
    }

    // now we have the required indexes with us
    if(max_index < min_index) {
        cout << max_index + (n - 1 - min_index) << endl;
    } else {
        cout << max_index + (n - 1 - min_index) - 1 << endl;
    }

    return 0;
}
