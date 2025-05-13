#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int n){
    int cnt(0);
    for(int i=0; i<n;){
        if(i+2<n and (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie")){
            cnt++;
            i += 3;
        }else{
            i++;
        }
    }
    return cnt;
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
        
        cout << solve(s, n) << endl;
        
    }
    
    return 0;
}



