#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        int ok(0);
        for (int i=0; i<s.size()-1; i++){
            if(s[i] == s[i+1]) ok = 1;
        }
        cout << (ok ? 1 : s.size()) << "\n";
    }

    return 0;
}
