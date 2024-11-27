#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
        
    string s;
    cin >> s;
        
    int cnt(0);
    string res="";
    for(int i=0; i<s.length(); i+=cnt){
        res += s[i];
        cnt++;
    }
        
    cout << res << endl;
    
    return 0;
}