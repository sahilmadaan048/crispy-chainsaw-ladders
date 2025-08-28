/*
A. The number of positions
time limit per test0.5 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petr stands in line of n people, but he doesn't know exactly which position he occupies. He can say that there are no less than a people standing in front of him and no more than b people standing behind him. Find the number of different positions Petr can occupy.

Input
The only line contains three integers n, a and b (0 ≤ a, b  n ≤ 100).

Output
Print the single number — the number of the sought positions.

Examples
inputCopy
3 1 1
outputCopy
2
inputCopy
5 2 3
outputCopy
3
Note
The possible positions in the first sample are 2 and 3 (if we number the positions starting with 1).

In the second sample they are 3, 4 and 5.


*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, a, b;
// 	cin >> n >> a >> b;

// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;

    cin >> n >> a >> b;

    vector<int> temp(n,0);
    for(int i = n-1; i>=(n-b-1); i--){
        temp[i] =1;
    }
    for(int i = 0 ;i< a ;i++){
        temp[i] = 0 ;
    }

    int count = 0 ;
    for(int i = 0 ;i< n; i++){
        if(temp[i] == 1){
            count ++;
        }
    }
    cout << count << endl;
    
    return 0;
}
