int arr[10000];
int reverse_array(int n) {
    if(n == 0) {
       return 0;
    }
    cout << arr[n] << sp;
    reverse_array(n - 1);
}
void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++ ) cin >> arr[i];
    reverse_array(n);
}
