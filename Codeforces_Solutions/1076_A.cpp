#include <bits/stdc++.h>
using namespace std;
 
string solve(string &s, int n){
    for(int i=0; i<n-1; i++){
        if(s[i] > s[i+1]){
            return s.substr(0, i) + s.substr(i + 1);
        }
    }
    return s.substr(0, n-1);
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    cout << solve(s, n) << endl;
    
    return 0;
}

