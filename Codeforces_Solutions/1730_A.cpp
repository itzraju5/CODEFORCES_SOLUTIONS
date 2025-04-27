#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        
        for(int i=0; i<n; i++) cin >> v[i];
        unordered_map<int, int> mp;
        for(auto i: v) mp[i]++;
        
        int ans(0);
        for(auto i: mp){
            if(i.second > 1){
                ans += min(c,mp[i.first]);
            }else{
                ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}

