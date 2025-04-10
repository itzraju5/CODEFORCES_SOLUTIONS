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
        
        string s;
        cin >> s;
        
        bool flag = false;
        for(int i=1; i<s.length(); i++){
            string s1 = s.substr(0, i);
            string s2 = s.substr(i);
            
            if(s1[0] != s2.back()){
                flag = true;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
