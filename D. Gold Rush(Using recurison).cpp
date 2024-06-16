#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define vii        vector<int>
#define vll        vector<ll>
#define nn         '\n'

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define sp         " "

#define sz(x)      (int)x.size()
#define all(x)     (x).begin(), (x).end()

using namespace std;
using ll = long long int;
using ld = long double;
using ull = unsigned long long;

bool recursion(int n, int m) {
    if(n == m) return true;
    if(n % 3 != 0) return false;
    return recursion(n / 3, m) or recursion(n / 3 * 2, m);
}

void solve() {
     int n, m;
     cin >> n >> m;
     if(recursion(n, m)) cout << "YES" << nn;
     else cout << "NO" << nn;
}

int32_t main() {
    FastIO;

    int test_case = 1;
    cin >> test_case;
    int Case = 1;
    while (test_case--) {
        // cout << "Case " << Case << ": \n";
        solve();
        Case++;
    }

    return 0;
}
