#include <bits/stdc++.h>
using namespace std;

string solve(string &s, int n) {
    if (n == 1) return s;
    char min_char = 'z';
    int min_char_index = 0;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] < min_char){
            min_char = s[i];
            min_char_index = i;
        }
    }
    if(min_char_index == 0) return s;
    
    string res;
    res += min_char;
    res += s.substr(0, min_char_index);
    res += s.substr(min_char_index + 1);
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s, n) << endl;
    }
    return 0;
}

