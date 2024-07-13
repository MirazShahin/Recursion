#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

vector<int> merge_array(vector<int> &l, vector<int> &r) {
    int i = 0, j = 0;
    vector<int> ans;
    while(i < l.size() and j < r.size()) {
        if(l[i] < r[j]) {
           ans.push_back(l[i]);
           i++;
        }
        else {
            ans.push_back(r[j]);
            j++;
        }
    }
    while(i < l.size()) {
        ans.push_back(l[i]);
        i++;
    }
    while(j < r.size()) {
        ans.push_back(r[j]);
        j++;
    }
    return ans;
}

vector<int> sorting(int i, int j, vector<int> v) {  
    if(i == j) {
        return vector<int> {v[i]};
    }
    int mid = (i + j) / 2;
    auto l = sorting(i, mid, v);
    auto r = sorting(mid + 1, j, v);
    return merge_array(l, r);
}

void solve() {
    /*
        Date: 13 - 07 - 2024
    */
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++ ) cin >> v[i];
    auto ans = sorting(0, n - 1, v);
    for(auto u : ans ) cout << u << " ";
    cout << endl;
}

int32_t main() {
    FastIO;  
    solve();
    return 0;
}
