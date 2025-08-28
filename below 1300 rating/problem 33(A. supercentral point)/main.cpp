/*
A. Supercentral Point
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day Vasya painted a Cartesian coordinate system on a piece of paper and marked some set of points (x1, y1), (x2, y2), ..., (xn, yn). Let's define neighbors for some fixed point from the given set (x, y):

point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y
We'll consider point (x, y) from the given set supercentral, if it has at least one upper, at least one lower, at least one left and at least one right neighbor among this set's points.

Vasya marked quite many points on the paper. Analyzing the picture manually is rather a challenge, so Vasya asked you to help him. Your task is to find the number of supercentral points in the given set.

Input
The first input line contains the only integer n (1 ≤ n ≤ 200) — the number of points in the given set. Next n lines contain the coordinates of the points written as "x y" (without the quotes) (|x|, |y| ≤ 1000), all coordinates are integers. The numbers in the line are separated by exactly one space. It is guaranteed that all points are different.

Output
Print the only number — the number of supercentral points of the given set.

Examples
inputCopy
8
1 1
4 2
3 1
1 2
0 2
0 1
1 0
1 3
outputCopy
2
inputCopy
5
0 0
0 1
1 0
0 -1
-1 0
outputCopy
1
Note
In the first sample the supercentral points are only points (1, 1) and (1, 2).

In the second sample there is one supercental point — point (0, 0).
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n ;

	vector<pair<int, int>> pairs(n) ;
	for(int i = 0 ; i< n ; i++){
		cin >> pairs[i].first  >> pairs[i].second ; 
	}

	int superPoint = 0 ;

	for(int i = 0 ; i< n ; i++){
		bool has_right = false, has_left = false, has_upper = false, has_lower = false;
		for(int j = 0 ; j< n ; j++){
			if(i != j){
				if(pairs[j].first > pairs[i].first && pairs[j].second == pairs[i].second) has_right = true;
				if(pairs[j].first < pairs[i].first && pairs[j].second == pairs[i].second) has_left = true;
				if(pairs[j].first == pairs[i].first && pairs[j].second > pairs[i].second) has_upper = true;
				if(pairs[j].first == pairs[i].first && pairs[j].second < pairs[i].second) has_lower = true;
			}
		}
		if(has_left && has_lower && has_right && has_upper) superPoint++;
        
	}
	cout << superPoint << endl;
}
