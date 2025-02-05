#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    if(s1 == s2) cout << -1 << endl;
    else cout << max(s1.length(), s2.length()) << endl;
    
    return 0;
}