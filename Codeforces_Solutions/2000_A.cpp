#include <bits/stdc++.h>
using namespace std;

bool solve(string &s){
    if(s.length()<3) return false;
    if(s[0] != '1' or s[1] != '0') return false;
    if(s.length() == 3 and s[2]-'0' < 2) return false;
    if(s.length() == 4 and s[2] == '0') return false;
    if(s.length() == 5 and s[2] == '0') return false;
    return true;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        if(solve(s)) cout << "YES" << endl;
        else cout << " NO" << endl;
    }
    
	return 0;
}
