#include <bits/stdc++.h>
using namespace std;
 

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    string res = "";
    for(int i=0; i<s.length()-1; i++){
        if(s[i] != s[i+1]){
            res += (s[i] + s[i+1]);
            cout << "YES\n" << s.substr(i,2) << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}