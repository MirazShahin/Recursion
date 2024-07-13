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
    cout << "Miraz" << endl;
    recurse(i + 1, n);
}
void solve() {
    int n;  cin >> n;
    recurse(0, n);
}
int32_t main() {
    FastIO;  
    solve();
    return 0;
}
 
