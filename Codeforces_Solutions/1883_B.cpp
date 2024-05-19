#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int odd_cnt = 0;
        unordered_map<char, int> mp;
        for(int i=0; i<n; i++) mp[s[i]]++;
        for(auto &el:mp)
        {
            if(el.second%2 != 0) odd_cnt++;
        }
        
        if(k+1 >= odd_cnt){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    
    return 0;
}
