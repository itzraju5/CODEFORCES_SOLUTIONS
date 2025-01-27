#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >>n;
        vector<long long> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        bool possible = true;
        long long extra(0);
        for(int i=0; i<n; i++){
            v[i] += extra;
            if(v[i] < i){
                possible = false;
                break;
            }
            extra = v[i] - i;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    
    return 0;
}