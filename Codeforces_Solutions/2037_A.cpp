#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        map<int, int> mp;
        for(auto i: v) mp[i]++;
        
        int cnt(0);
        for(auto i: mp){
            cnt += i.second/2;
        }
        cout << cnt << endl;
    }
        
    return 0;
}