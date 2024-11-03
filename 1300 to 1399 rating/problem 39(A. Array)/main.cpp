// https://codeforces.com/problemset/problem/300/A

#include <cstdio>
#include <vector>
 
using namespace std;
vector <int> first, second, third; 
int main () {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int a;
            scanf("%d", &a);
        if (a == 0)
         third.push_back(a);
        if (a > 0) 
            second.push_back(a);
        if (a < 0) 
            first.push_back(a);
    }
    if (second.size() == 0) {
        for(int i = 0; i < 2; i++)
                      second.push_back(first.back()), first.pop_back();
    }
    if (first.size() % 2 == 0) {
        third.push_back(first.back());
        first.pop_back();
    }
    printf("%d", first.size());
    for(int i = 0; i < first.size(); i++) {
        printf(" %d",first[i]); 
    }
    printf("\n%d", second.size()); 
    for(int i = 0; i < second.size(); i++) {
        printf(" %d", second[i]);
    }
    printf("\n%d", third.size());
    for(int i = 0; i < third.size(); i++) {
        printf(" %d", third[i]);
    }
    puts("");
}