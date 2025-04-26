#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        sort(begin(v), end(v));
        bool flag = false;
        
        for(int i=1; i<n; i++){
            if(v[i] - v[i-1] == 1){
                flag = true;
                break;
            }
        }
        
        if(flag) cout << 2 << endl;
        else cout << 1 << endl;
        
    }
    
    return 0;
}

