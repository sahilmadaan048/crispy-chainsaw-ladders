// https://codeforces.com/problemset/problem/358/A

#include <bits/stdc++.h>
using namespace std;

int x[1234];

int main() {
  int n; scanf("%d", &n);
  for(int i = 0; i < n; ++i) {
    scanf("%d", x + i);
  }
  for(int i = 0; i < n - 1; ++i) {
    for(int j = 0; j < n - 1; ++j) {
      if(i == j) continue;
      int x1 = min(x[i], x[i + 1]), x2 = max(x[i], x[i + 1]);
      int y1 = min(x[j], x[j + 1]), y2 = max(x[j], x[j + 1]);
      if(x1 < y1 && y1 < x2 && x2 < y2) {
        puts("yes");
        return 0;
      }
    }
  }
  puts("no");
  return 0;
}
