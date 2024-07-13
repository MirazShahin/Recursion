#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

void recurse(int i,  int n) { 
    if(i > n) {
        return;
    } 
    recurse(i + 1, n);
    cout << i << " ";
}
void solve() {
    /*
       Date: 13 - 07 - 2024
    */
    int n;  cin >> n;
    recurse(1, n);
}
int32_t main() {
    FastIO;  
    solve();
    return 0;
}
 
