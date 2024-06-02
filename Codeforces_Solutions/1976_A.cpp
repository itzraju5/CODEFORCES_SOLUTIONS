#include <bits/stdc++.h>
using namespace std;

bool solve(string &s, int n){
    for(int i = 1; i < n; i++)
    {
        if(s[i] < s[i - 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(solve(s, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
