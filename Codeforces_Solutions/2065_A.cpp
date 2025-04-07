#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        string w;
        cin >> w;
        
        w = w.substr(0, w.length()- 2);
        cout << w + "i" << endl;
    }
    return 0;
}