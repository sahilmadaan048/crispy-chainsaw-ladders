// https://codeforces.com/problemset/problem/92/A

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // n is the number of walruses
    // m is the number of chips the presenter has initially

    int current_walrus = 1; // Start giving chips from walrus number 1

    while (m >= current_walrus)
    {
        m -= current_walrus; // Give 'current_walrus' chips to the current walrus
        current_walrus++;    // Move to the next walrus
        if (current_walrus > n)
        {
            current_walrus = 1; // If we've given chips to the last walrus, start from the first walrus again
        }
    }

    cout << m << endl; // The remaining chips that the presenter ends up with

    return 0;
}