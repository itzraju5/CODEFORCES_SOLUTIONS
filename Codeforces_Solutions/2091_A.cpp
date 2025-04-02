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
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        map<int, int> mp = {{0,3}, {1, 1}, {2, 2}, {3,1}, {5, 1}};
        
        int i(0);
        for(i=0; i<n; i++){
            if(mp.count(v[i])){
                mp[v[i]]--;
                if(mp[v[i]] == 0) mp.erase(v[i]);
            }
            if(mp.size() == 0) break;
        }
        
        if(mp.empty()){
            cout << i+1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}

  