#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        cout << count(s.begin(), s.end(), '1') << endl;
    }
    
    return 0;
}
