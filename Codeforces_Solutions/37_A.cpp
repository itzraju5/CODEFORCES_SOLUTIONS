#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans(0);
    for(auto &el: mp){
        ans = max(ans, el.second);
    }
    cout << ans << " " << mp.size();
    
    return 0;
}