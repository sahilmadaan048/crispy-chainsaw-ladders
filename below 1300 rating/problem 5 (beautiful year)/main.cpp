/*
A. Beautiful Year
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
inputCopy
1987
outputCopy
2013
inputCopy
2013
outputCopy
2014
*/

// #include<bits/stdc++.h>
// using namespace std;

// bool isDistinct(int year){
// 	unordered_set<int> temp;
// 	int count = 0 ;
// 	while(year){
// 		int ld = year%10;
// 		temp.insert(ld);
// 		count ++;
// 		year/=10;
// 	}

// 	int temp_count = 0 ;

// 	for(auto &ele : temp){
// 		temp_count++;
// 	}
// 	return (count == temp_count) ;
// }

// int main(){
// 	int year ;
// 	cin >> year;

// 	for(int i=year+1 ; i<= 9000 ; i++){
// 		if(isDistinct(i)){
// 			cout << i ;
// 			break;
// 		}
// 	}
// }

/*
A. Beautiful Year
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
inputCopy
1987
outputCopy
2013
inputCopy
2013
outputCopy
2014
*/

// #include<bits/stdc++.h>
// using namespace std;

// bool isDistinct(int year){
// 	unordered_set<int> temp;
// 	int count = 0 ;
// 	while(year){
// 		int ld = year%10;
// 		temp.insert(ld);
// 		count ++;
// 		year/=10;
// 	}

// 	int temp_count = 0 ;

// 	for(auto &ele : temp){
// 		temp_count++;
// 	}
// 	return (count == temp_count) ;
// }

// int main(){
// 	int year ;
// 	cin >> year;

// 	for(int i=year+1 ; i<= 9000 ; i++){
// 		if(isDistinct(i)){
// 			cout << i ;
// 			break;
// 		}
// 	}
// }

// 

// #include <bits/stdc++.h>
// using namespace std;

// bool hasDistinctDigits(int year) {
//     // Convert the year to string to easily check its digits
//     string yearStr = to_string(year);
    
//     // Check if all digits are unique
//     return yearStr.size() == unique(yearStr.begin(), yearStr.end()).size();
// }

// int main() {
//     int y;
//     cin >> y; // Input the year
    
//     // Start from the next year since we're looking for a year strictly larger than y
//     int minYear = y + 1;
    
//     // Iterate through years to find the minimum year with distinct digits
//     while (!hasDistinctDigits(minYear)) {
//         ++minYear;
//     }
    
//     cout << minYear << endl; // Output the result
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits;
    for (char digit : yearStr) {
        if (digits.count(digit)) {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}

int main() {
    int y;
    cin >> y; // Input the year
    
    int minYear = y + 1; // Start from the next year since we're looking for a year strictly larger than y
    
    // Iterate through years to find the minimum year with distinct digits
    while (!hasDistinctDigits(minYear)) {
        ++minYear;
    }
    
    cout << minYear << endl; // Output the result
    
    return 0;
}
