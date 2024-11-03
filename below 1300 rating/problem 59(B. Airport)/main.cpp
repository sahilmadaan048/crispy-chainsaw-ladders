/*
B. Airport
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Lolek and Bolek are about to travel abroad by plane. The local airport has a special Choose Your Plane offer. The offer's conditions are as follows

it is up to a passenger to choose a plane to fly on;
if the chosen plane has x (x  0) empty seats at the given moment, then the ticket for such a plane costs x zlotys (units of Polish currency).
The only ticket office of the airport already has a queue of n passengers in front of it. Lolek and Bolek have not stood in the queue yet, but they are already wondering what is the maximum and the minimum number of zlotys the airport administration can earn if all n passengers buy tickets according to the conditions of this offer

The passengers buy tickets in turn, the first person in the queue goes first, then goes the second one, and so on up to n-th person.

Input
The first line contains two integers n and m (1 ≤ n, m ≤ 1000) — the number of passengers in the queue and the number of planes in the airport, correspondingly. The next line contains m integers a1, a2, ..., am (1 ≤ ai ≤ 1000) — ai stands for the number of empty seats in the i-th plane before the ticket office starts selling tickets.

The numbers in the lines are separated by a space. It is guaranteed that there are at least n empty seats in total.

Output
Print two integers — the maximum and the minimum number of zlotys that the airport administration can earn, correspondingly.

Examples
inputCopy
4 3
2 1 1
outputCopy
5 5
inputCopy
4 3
2 2 2
outputCopy
7 6
Note
In the first test sample the number of passengers is equal to the number of empty seats, so regardless of the way the planes are chosen, the administration will earn the same sum.

In the second sample the sum is maximized if the 1-st person in the queue buys a ticket to the 1-st plane, the 2-nd person — to the 2-nd plane, the 3-rd person — to the 3-rd plane, the 4-th person — to the 1-st plane. The sum is minimized if the 1-st person in the queue buys a ticket to the 1-st plane, the 2-nd person — to the 1-st plane, the 3-rd person — to the 2-nd plane, the 4-th person — to the 2-nd plane.
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,m;
// 	cin >> n >> m ;
// 	//n is the number of passengers in the queue
// 	//m is the number of planes on the airport

// 	// vectot<int> temp(m) ;
// 	unordered_map<int, int> temp;
// 	int sum = 0 ;
// 	for(int i = 0 ;i< m ; i++){
// 		// cin >> temp[i]
// 		cin >> temp[i] ;
// 		sum += temp[i] ;
// 	}

// 	//wdge case ig na and the min_sum and the max_sum will be same
// 	//and that will be equal to the anount with which each person
// 	//would hae to buy the tickets

//     //temp actually stores the number of seats available in the ith plane 
//     //at the element of it's ith index 
// 	for(auto &pair : temp){
// 		//this theme is great 
// 		//i can acrually see the textual comments here
// 		cout << pair.first << " " << pair.second << endl;
// 	}
// 	return 0 ;
// }

// #include <bits/stdc++.h>
// // #include <map>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
    
//     map<int, int> seats;
//     for (int i = 0; i < m; ++i) {
//         int seat;
//         cin >> seat;
//         seats[seat]++;
//     }
    
//     // Calculate maximum earnings
//     int max_earnings = 0;
//     int remaining_passengers = n;
    
//     while (remaining_passengers > 0) {
//         auto it = seats.rbegin(); // Get the largest element
//         int seat_count = it->first;
//         int planes_with_seat_count = it->second;
        
//         int passengers_to_take = min(remaining_passengers, planes_with_seat_count);
//         max_earnings += passengers_to_take * seat_count;
//         remaining_passengers -= passengers_to_take;
        
//         seats[seat_count] -= passengers_to_take;
//         if (seats[seat_count] == 0) {
//             seats.erase(seat_count);
//         }
//         if (seat_count > 1) {
//             seats[seat_count - 1] += passengers_to_take;
//         }
//     }
    
//     // Calculate minimum earnings
//     int min_earnings = 0;
//     remaining_passengers = n;
    
//     while (remaining_passengers > 0) {
//         auto it = seats.begin(); // Get the smallest element
//         int seat_count = it->first;
//         int planes_with_seat_count = it->second;
        
//         int passengers_to_take = min(remaining_passengers, planes_with_seat_count);
//         min_earnings += passengers_to_take * seat_count;
//         remaining_passengers -= passengers_to_take;
        
//         seats[seat_count] -= passengers_to_take;
//         if (seats[seat_count] == 0) {
//             seats.erase(seat_count);
//         }
//         if (seat_count > 1) {
//             seats[seat_count - 1] += passengers_to_take;
//         }
//     }
    
//     cout << max_earnings << " " << min_earnings << endl;
    
//     // return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, m;
// 	cin >> n >> m ;
// 	vector<int> temp(m);
// 	for(int i= 0; i<m; i++){
// 		cin >> temp[i];
// 		// cout << temp[i] << " ";
// 	}
// 	for(int j= 0 ; j<m ; j++){
// 		cout << temp[j] << " "  ; 
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,m;
// 	cin >> n >> m;
// 	vector<int> a(m);
// 	for(int i = 0 ; i<m ; i++){
// 		cin >> a[i];
// 	}

// 	vector<int> temp1 = a;
// 	sort(temp1.begin(), temp1.end());
// 	int minsum = 0 ;
// 	for(auto &ele : temp1){
// 		if(ele >0 && m>0){
// 			minsum +=ele;
// 			ele-=1;
// 			m--;
// 		}
// 		else{
// 			break;
// 		}
// 	}

// 	vector<int> temp2 = a;
// 	sort(temp2.begin(), temp2.end(), greater<int>());
// 	int max_sum = 0 ;
// 	for(auto &ele : temp2){
// 		if(ele >0 && m>0){
// 			max_sum += ele ;
// 			ele-=1;
// 			m--;
// 		}
// 		else{
// 			break;
// 		}
// 	}

// cout << max_sum << " " << minsum << endl;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> seats(m);
    
//     for (int i = 0; i < m; ++i) {
//         cin >> seats[i];
//     }

//     // Calculate maximum earnings
//     vector<int> max_seats = seats;
//     int max_earnings = 0;
//     for (int i = 0; i < n; ++i) {
//         // Find the plane with the maximum seats available
//         auto max_it = max_element(max_seats.begin(), max_seats.end());
//         max_earnings += *max_it;
//         (*max_it)--;
//     }

//     // Calculate minimum earnings
//     vector<int> min_seats = seats;
//     int min_earnings = 0;
//     for (int i = 0; i < n; ++i) {
//         // Find the plane with the minimum seats available
//         int min_index = -1;
//         int min_value = INT_MAX;
//         for (int j = 0; j < min_seats.size(); ++j) {
//             if (min_seats[j] > 0 && min_seats[j] < min_value) {
//                 min_value = min_seats[j];
//                 min_index = j;
//             }
//         }

//         min_earnings += min_seats[min_index];
//         min_seats[min_index]--;
//     }

//     cout << max_earnings << " " << min_earnings << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> seats(m);
    
//     for (int i = 0; i < m; ++i) {
//         cin >> seats[i];
//     }

//     // Calculate maximum earnings
//     vector<int> max_seats = seats;
//     int max_earnings = 0;
//     for (int i = 0; i < n; ++i) {
//         // Find the plane with the maximum seats available
//         auto max_it = max_element(max_seats.begin(), max_seats.end());
//         max_earnings += *max_it;
//         (*max_it)--;
//     }

//     // Calculate minimum earnings
//     vector<int> min_seats = seats;
//     int min_earnings = 0;
//     for (int i = 0; i < n; ++i) {
//         // Find the plane with the minimum seats available
//         auto min_it = min_element(min_seats.begin(), min_seats.end(), [](int a, int b) {
//             return (a > 0 && (b == 0 || a < b));
//         });
//         min_earnings += *min_it;
//         (*min_it)--;
//     }

//     cout << max_earnings << " " << min_earnings << endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m ;

	vector<int> seats(m);
	for(int i = 0 ; i< m ; i++){
		cin >> seats[i];
	}

	int max_sum = 0 ;
	vector<int> max_seats = seats;
	for(int i = 0 ; i< n ; i++){
		auto max_it = max_element(max_seats.begin(), max_seats.end());
		max_sum += *(max_it);
		(*max_it)--;
	}


	int min_sum = 0 ;
	vector<int> min_seats = seats;
	for(int i= 0 ; i< n ; i++){
		int minindex= -1;
		int minvalue = INT_MAX;
		for(int j = 0 ; j< min_seats.size() ; j++){
			if(min_seats[j] > 0 && min_seats[j] < minvalue){
				minvalue = min_seats[j];
				minindex = j ;
			}
		}
		min_sum += min_seats[minindex];
		min_seats[minindex]-- ;

	}
	cout << max_sum << " " << min_sum << endl;
}