// https://codeforces.com/problemset/problem/236/B

// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1073741824 ;

// int count(int a, int b, int c){
// 	int count = 0;
// 	int num = a*b*c;
// 	for(int i=1; i*i<=(num); i++){
// 		if(num%i == 0){
// 			count++;
// 		}
// 		if(i != num/i){
// 			count++;
// 		}
// 	}
// 	return count;
// }

// int main() {
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	long long sum = 0;
// 	for(int i=1; i<=a; i++){
// 		for(int j=1; j<=b; j++){
// 			for(int k=1; k<=c; k++){
// 				(sum += (count(i,j,k))%mod)%mod;
// 			}
// 		}
// 	}
// 	cout << sum << "\n";
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int mod = 1073741824;

vector<int> divisor_count(int max_num) {
    vector<int> divisors(max_num + 1, 0);
    
    for (int i = 1; i <= max_num; i++) {
        for (int j = i; j <= max_num; j += i) {
            divisors[j]++;
        }
    }
    
    return divisors;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int max_num = a * b * c;
    
    // Precompute divisor counts for all numbers up to a * b * c
    vector<int> divisors = divisor_count(max_num);
    
    long long sum = 0;
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                int product = i * j * k;
                sum = (sum + divisors[product]) % mod;
            }
        }
    }
    
    cout << sum << "\n";
    
    return 0;
}
