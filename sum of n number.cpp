int sum_of_n(int n, int sum) {

   if(n == 0) {
      return sum;
   }
   return sum_of_n(n - 1, n - 1 + sum);
}
void solve()
{
    int n;
    cin >> n;
    cout << sum_of_n(n, n) << nn;
}
