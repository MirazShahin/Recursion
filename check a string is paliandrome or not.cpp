
string rev;
int reverse_string(string s, int n) {
    if(n < 0) {
       return 0;
    }
    rev.push_back(s[n - 1]);
    reverse_string(s, n - 1);
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse_string(s, n);
    rev.pop_back();

    if(s == rev) {
        cout << "Paliandrome" ;
    }
    else {
        cout << "Not Paliandrome";
    }
}
