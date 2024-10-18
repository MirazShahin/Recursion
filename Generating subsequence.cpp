#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

void generating_all_subsequence(int index, vector<int> &v, int n, vector<int> &sequ) {
    if(index >= n) {
        for(auto &it : sequ) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    sequ.push_back(v[index]);
    generating_all_subsequence(index + 1, v, n, sequ);
    sequ.pop_back();
    generating_all_subsequence(index + 1, v, n, sequ);
} 
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    vector<int> sequence;
    generating_all_subsequence(0, v, n, sequence);
} 
int32_t main() {
    FastIO;
 
    int test_case = 1;
    // cin >> test_case;
    int Case = 1;
    while(test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
} 
