#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

void reverse_using_recurse(int i, int j, vector<int> &v) { 
    if(i >= j) return;
    swap(v[i], v[j]);
    reverse_using_recurse(i + 1, j - 1, v);
}
void solve() {
    /*
       Date: 13 - 07 - 2024
    */
    int n;  cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    reverse_using_recurse(0, n - 1, v);
    for(auto u : v) cout << u << " ";
    cout << endl;
}
int32_t main() {
    FastIO;  
    solve();
    return 0;
}
 
