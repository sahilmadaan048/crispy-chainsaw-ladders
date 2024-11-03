/*
B. Jeff and Periods
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day Jeff got hold of an integer sequence a1, a2, ..., an of length n. The boy immediately decided to analyze the sequence. For that, he needs to find all values of x, for which these conditions hold

x occurs in sequence a.
Consider all positions of numbers x in the sequence a (such i, that ai = x). These numbers, sorted in the increasing order, must form an arithmetic progression.
Help Jeff, find all x that meet the problem conditions.

Input
The first line contains integer n (1 ≤ n ≤ 105). The next line contains integers a1, a2, ..., an (1 ≤ ai ≤ 105). The numbers are separated by spaces.

Output
In the first line print integer t — the number of valid x. On each of the next t lines print two integers x and px, where x is current suitable value, px is the common difference between numbers in the progression (if x occurs exactly once in the sequence, px must equal 0). Print the pairs in the order of increasing x.

Examples
inputCopy
1
2
outputCopy
1
2 0
inputCopy
8
1 2 1 3 1 2 1 5
outputCopy
4
1 2
2 4
3 0
5 0
Note
In the first test 2 occurs exactly once in the sequence, ergo p2 = 0.
*/

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5;
// vector<int> temp(N);

// vector<int> temp2(N);

// bool checkAP(vector<int> &diff){
// 	bool flag = true;
// 	int ele = diff[0];
// 	for(auto &element :diff){
// 		if(ele != element){
// 			flag = false;
// 			break;		}
// 	}
// 	return flag;
// }

// // bool isAp(ele,)

// bool isValid(int element){
// 	int count = 0 ;
// 	int i = 0 ;
// 	for(;i<N; i++){
// 		// int ele = temp[i];
// 		if(temp[i] == element){
// 			count++;
// 		}
// 	}
// 	if(count == 1){
// 		temp2[temp[i]] == 0;
// 		return true;
// 	}
// 	else{
// 		vector<int> diff;
// 		int i = 0 ;
// 		int index = 0 ;
// 		for(;i<count;i++){
// 			for(int j = 0;j<count ; j++){
// 			if(temp[i] == element){
// 				int index2 = index;
// 				index = i;
// 				diff.push_back(index2-index);
// 				// break;
// 			}
// 		}
// 		}
// 		if(checkAP(diff)){
// 			temp2[temp[i]] = diff[1]-diff[0];
// 		}
// 		return true;
// 	}

// 	return false;
// }

// vector<bool> visited(N,false);

// int main(){
// 	int n;
// 	cin >> n ;
// 	// vector<int> temp(n);
// 	for(int i = 0 ;i< n ; i++){
// 		cin >> temp[i];
// 	}
// 	//we have to print the number satisfying the ap condiiton and its common diff
// 	int i = 0 ;
// 	for(;i<N ;i++){
// 		if(isValid(temp[i]) && visited[i] == false){
// 			visited[i] == true;
// 			cout << temp[i] << " " << temp2[temp[i]] << endl;
// 		}
// 	}
// 	return 0 ;
// }



#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int n;
vector<int> arr[N];

vector<pair<int, int>> answer;


int main() {
 
    cin >> n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x].push_back(i);  //let's store their indices
    }

    for(int i=0; i<N; i++){
        if(arr[i].size() == 1){
            answer.push_back({i, 0});
        }
        else if(arr[i].size() > 1){
            sort(arr[i].begin(), arr[i].end());
            int r = arr[i][1] - arr[i][0];
            bool good = true;

            for(int j=1; j<arr[i].size(); j++){
                good &= (arr[i][j] - arr[i][j-1] == r);
            }
            if(good){
                answer.push_back({i, r});
            }
        }
    }

    cout << answer.size() << endl;

    for(int i=0; i<answer.size(); i++){
        cout << answer[i].first << " " << answer[i].second << endl;
    }


    return 0;
}
