// https://codeforces.com/problemset/problem/327/B
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e7; // Set a reasonable upper limit for prime numbers
vector<bool> prime(MAXN + 1, true);
vector<int> primes; // Vector to store the prime numbers

void sieve() {
    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                prime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }
    
    // Store the prime numbers in the vector
    for (int i = 2; i <= MAXN; i++) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    int n; 
    cin >> n; // Read the number of primes to output
    
    sieve(); // Generate prime numbers

    // Check if n is within bounds
    // if (n > primes.size()) {
    //     cout << "Not enough primes generated.\n";
    //     return 0;
    // }
    
    // Print the first n prime numbers
    for (int i = 0; i < n; i++) {
        cout << primes[i] << " ";
    }
    cout << endl; // For better output formatting
    return 0;
}
