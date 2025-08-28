// /*
// B. Pashmak and Flowers
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

// Your task is to write a program which calculates two things

// The maximum beauty difference of flowers that Pashmak can give to Parmida.
// The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
// Input
// The first line of the input contains n (2 ≤ n ≤ 2·105). In the next line there are n space-separated integers b1, b2, ..., bn (1 ≤ bi ≤ 109).

// Output
// The only line of output should contain two integers. The maximum beauty difference and the number of ways this may happen, respectively.

// Examples
// inputCopy
// 2
// 1 2
// outputCopy
// 1 1
// inputCopy
// 3
// 1 4 5
// outputCopy
// 4 1
// inputCopy
// 5
// 3 1 2 3 1
// outputCopy
// 2 4
// Note
// In the third sample the maximum beauty difference is 2 and there are 4 ways to do this

// choosing the first and the second flowers;
// choosing the first and the fifth flowers;
// choosing the fourth and the second flowers;
// choosing the fourth and the fifth flowers.
// */
// //pashmak and flowers

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// // 	int n;
// // 	cin >> n ;
// // 	vector<int> b(n);
// // 	for(int i = 0 ; i<n ; i++){
// // 		cin >> b[i];
// // 	}

// // 	vector<int> temp = b;
// // 	sort(temp.begin(), temp.end());
// // 	//1. finding The maximum beauty difference of flowers that Pashmak can give to Parmida
// // 	int ans1 = temp[n-1]-temp[0];


// // 	// set<pair<int, int>> temp2;
// // 	// for(auto & pair)
// // 	//2. The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
// // 	//this is the count of pairs which have a difference equal to ans1
// // 	//we have to it in o(n) not o(n^2)
// // 	int count = 0;
// // 	for(int i = 0 ; i< n ; i++){
// // 		for(int j=0 ; j< n ; j++){
// // 			if((temp[i] - temp[j]) == ans1){
// // 				count++;
// // 			}
// // 		}
// // 	}

// // 	cout << ans1 << " " << count << endl;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> b(n);
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//     }

//     vector<int> temp = b;
//     sort(temp.begin(), temp.end());

//     // 1. Finding the maximum beauty difference of flowers that Pashmak can give to Parmida
//     int ans1 = temp[n - 1] - temp[0];

//     // 2. Counting the number of pairs with the maximum beauty difference
//     // Use count to find the number of occurrences of the smallest and largest elements
//     int minCount = count(temp.begin(), temp.end(), temp[0]);
//     int maxCount = count(temp.begin(), temp.end(), temp[n - 1]);

//     long long count = 0;
//     if (ans1 == 0) {
//         // All elements are the same, so choose any two different elements from n elements

//         //thats nc2 ways
//         count = (n * (n - 1)) / 2;
//     } else {
//         count = minCount * maxCount;
//     }

//     cout << ans1 << " " << count << endl;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> b(n);
    
//     // Reading input and finding the minimum and maximum values
//     int minBeauty = INT_MAX, maxBeauty = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//         if (b[i] < minBeauty) {
//             minBeauty = b[i];
//         }
//         if (b[i] > maxBeauty) {
//             maxBeauty = b[i];
//         }
//     }

//     // Calculate the maximum beauty difference
//     int maxBeautyDifference = maxBeauty - minBeauty;

//     // Count the occurrences of minBeauty and maxBeauty
//     long long minCount = 0, maxCount = 0;
//     for (int i = 0; i < n; i++) {
//         if (b[i] == minBeauty) {
//             minCount++;
//         }
//         if (b[i] == maxBeauty) {
//             maxCount++;
//         }
//     }

//     // Calculate the number of ways to choose the pairs
//     long long ways;
//     if (maxBeautyDifference == 0) {
//         // All flowers have the same beauty number
//         ways = (n * (n - 1)) / 2;
//     } else {
//         ways = minCount * maxCount;
//     }

//     cout << maxBeautyDifference << " " << ways << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> b(n);

//    	for(int i = 0 ; i<n ; i++){
//    		cin >> b[i];
//    	}
   	
//    	auto it = max_element(b.begin(), b.end());
//    	cout << *(it) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    vector<int> b(n);
    
    // Reading input and finding the minimum and maximum values
    int minBeauty = INT_MAX, maxBeauty = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] < minBeauty) {
            minBeauty = b[i];
        }
        if (b[i] > maxBeauty) {
            maxBeauty = b[i];
        }
    }
 
    // Calculate the maximum beauty difference
    int maxBeautyDifference = maxBeauty - minBeauty;
 
    // Count the occurrences of minBeauty and maxBeauty
    long long minCount = 0, maxCount = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == minBeauty) {
            minCount++;
        }
        if (b[i] == maxBeauty) {
            maxCount++;
        }
    }
 
    // Calculate the number of ways to choose the pairs
    long long ways;
    if (maxBeautyDifference == 0) {
        // All flowers have the same beauty number
        ways = (n * (n - 1)) / 2;
    } else {
        ways = minCount * maxCount;
    }
 
    cout << maxBeautyDifference << " " << ways << endl;
    return 0;
}
