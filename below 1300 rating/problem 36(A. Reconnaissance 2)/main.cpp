/*
A. Reconnaissance 2
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
n soldiers stand in a circle. For each soldier his height ai is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. |ai - aj| is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.

Input
The first line contains integer n (2 ≤ n ≤ 100) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 1000). The soldier heights are given in clockwise or counterclockwise direction.

Output
Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.

Examples
inputCopy
5
10 12 13 15 10
outputCopy
5 1
inputCopy
4
10 20 30 40
outputCopy
1 2

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n ;
// 	cin.ignore();

// 	vector<int> heights(n);
// 	for(int i = 0 ; i< n ; i++){
// 		cin >> heights[i];
// 	}

// 	//we have to print the indices of the two neighbourin soldiers which have minimal  height diff
// 	int min_height=  abs(heights[0]-heights[n-1]);
// 	int index = 0 ;
// 	for(int i =n-1 ; i>=1 ; i-- ){
// 		int diff = abs(heights[i]- heights[i-1]);
// 		min_height = min(min_height, diff);
// 		index = i ;
// 	}

// 	if(min_height == abs(heights[0]-heights[n-1])){
// 		cout << (n) << " " << "1" ;
// 	}else{
// 		cout << index << " " <<  index+1 ;
// 	}


// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     vector<int> heights(n);
//     for(int i = 0; i < n; i++){
//         cin >> heights[i];
//     }

//     // We have to print the indices of the two neighbouring soldiers which have minimal height difference
//     int min_height_diff = abs(heights[0] - heights[n-1]);
//     int index1 = n-1, index2 = 0;

//     for(int i = 1; i < n; i++){
//         int diff = abs(heights[i] - heights[i-1]);
//         if(diff < min_height_diff){
//             min_height_diff = diff;
//             index1 = i-1;
//             index2 = i;
//         }
//     }

//     cout << index1 + 1 << " " << index2 + 1 << endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> heights(n);

	for(int i  = 0 ; i< n ; i++){
		cin >> heights[i];
	}

	int min_diff = abs(heights[0]- heights[n-1]);
	int index1 = n-1 ;
	int index2 = 0;

	for(int i=1;  i< n ; i++){
		int diff = abs(heights[i] - heights[i-1]);
		if(diff < min_diff){
			min_diff = diff ;
			index1 = i-1;
			index2 = i;
		}
	}

	cout << index1 +1  <<  " " << index2+1  ;
} 