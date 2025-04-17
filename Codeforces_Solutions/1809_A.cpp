#include <bits/stdc++.h>
using namespace std;

int solve(string s){
    map<char, int> mp;
    for(auto i: s) mp[i]++;
    if(mp.size() == 1) return -1;
    else if(mp.size() ==2){
        for(auto i: mp){
            if(i.second == 3) return 6;
        }
        return 4;
    }else if(mp.size() == 3) return 4;
    return 4;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        
        cout << solve(s) << endl;
    }
    
    return 0;
}
