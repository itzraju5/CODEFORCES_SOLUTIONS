#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        map<int, int> mp;
        
        for(int i=0; i<n; i++) cin >> v[i];
        
        long long cnt(0);
        for(int i=0; i<n; i++){
            int val = v[i]-i;
            if(mp.count(val)){
                cnt += mp[val];
            }
            mp[val]++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}

