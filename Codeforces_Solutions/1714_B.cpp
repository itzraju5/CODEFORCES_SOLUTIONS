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
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        map<int, int> mp;
        int i;
        for(i=n-1; i>=0; i--){
            mp[v[i]]++;
            if(mp[v[i]] > 1) break;
        }
        
        cout << i-0+1 << endl;
    }
    return 0;
}
