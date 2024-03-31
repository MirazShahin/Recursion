#include <bits/stdc++.h>
#define FastIO                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;
using ll = long long int;
int ans;
int Sum_of_n(int n, int sum) {

   if(n < 1) {
      ans = sum;
   }
   else {
     Sum_of_n(n - 1, sum + n);
   }
}
void solve()
{
    int n;
    cin >> n;
    Sum_of_n(n, 0);
    cout << ans << endl;
}
int32_t main()
{
    FastIO;
    int test_case = 1;
//    cin >> test_case;
    int Case = 1;
    while (test_case--) {
//    cout << "Case " << Case << ": ";
        solve();
        Case++;
    }

    return 0;
}
