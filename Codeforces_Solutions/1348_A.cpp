#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        n = n/2 + 1;
        cout << pow(2, n) - 2 << endl;
    }
    
    return 0;
}
