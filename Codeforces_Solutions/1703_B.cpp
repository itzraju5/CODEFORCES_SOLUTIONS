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
        
        string s;
        cin >> s;
        
        map<char, int> mp;
        int ans(0);
        for(int i=0; i<n; i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]]++;
                ans+=2;
            }else{
                ans += 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}