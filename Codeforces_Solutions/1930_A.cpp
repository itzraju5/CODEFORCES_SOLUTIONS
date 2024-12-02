#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int>v(2*n);
        for(int i=0; i<2*n; i++) cin >> v[i];
        
        sort(rbegin(v), rend(v));
        int i(0), res(0);
        while(n--){
            res += min(v[i], v[i+1]);
            i+=2;
        }
        cout << res << endl;
    }
        
    return 0;
}