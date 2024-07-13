#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

void reverse_using_recurse(int i, int j, string &v) { 
    if(i >= j) return;
    swap(v[i], v[j]);
    reverse_using_recurse(i + 1, j - 1, v);
}
void solve() {
    /*
       Date: 13 - 07 - 2024
    */
    string s;  cin >> s;
    string w = s;
    reverse_using_recurse(0, s.size() - 1, s);
    if(w == s) cout << "The string is Paliandrome\n";
    else cout << "The string is not Paliandrome\n";
}
int32_t main() {
    FastIO;  
    solve();
    return 0;
}
