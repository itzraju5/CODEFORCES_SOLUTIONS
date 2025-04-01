#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, t;
    cin >> s >> t;
    
    int cnt(0);
    for(auto ch: t){
        if(cnt < s.length() and s[cnt] == ch) cnt++;
    }
    cout << cnt + 1 << endl;
    
    return 0;
}


  