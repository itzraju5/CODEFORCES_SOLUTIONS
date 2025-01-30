#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        vector<int> v1(26, 0), v2(26, 0); 
        for(auto c:s){
            if(islower(c)) v1[c-'a']++;
            else v2[c-'A']++;
        }
        
        int cnt(0);
        for(int i=0; i<26; i++){
            int min_pair = min(v1[i], v2[i]);
            cnt += min_pair;
            
            v1[i] -= min_pair;
            v2[i] -= min_pair;
            
            int extra = max(v1[i], v2[i]) / 2;
            int can_convert = min(k, extra);
            
            cnt += can_convert;
            k-= can_convert;
        }
        cout << cnt << endl;
    }
    
    return 0;
}