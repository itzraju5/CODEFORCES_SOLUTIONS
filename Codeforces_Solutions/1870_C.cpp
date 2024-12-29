#include <bits/stdc++.h>
using namespace std;

bool solve(string &s, int n){
    map<char, vector<int>> mp;
    for(int i=0; i<n; i++) mp[s[i]].push_back(i);
        
    for(auto i: mp){
        bool even = false, odd = false;
        
        for(auto pos: i.second){
            if(pos%2 == 0){
                even = true;
            }else{
                odd = true;
            }
        }
        if(even and odd) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        if(solve(s, n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
