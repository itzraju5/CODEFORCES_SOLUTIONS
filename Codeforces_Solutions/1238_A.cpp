#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long x, y;
        cin >> x >> y;
        
        if(x-y >= 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}