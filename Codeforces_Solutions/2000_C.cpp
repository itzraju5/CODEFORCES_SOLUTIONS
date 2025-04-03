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
        
        int m;
        cin >> m;
        
        while(m--){
            string s;
            cin >> s;
            
            unordered_map<int, char> int_char;
            unordered_map<char, int> char_int;
            bool flag = false;
            
            for(int i=0; i<n; i++){
                if(s.length() != n){
                    flag = true;
                    break;
                }
                if(int_char.count(v[i]) and int_char[v[i]] != s[i]){
                    flag = true;
                    break;
                }
                if(char_int.count(s[i]) and char_int[s[i]] != v[i]){
                    flag = true;
                    break;
                }
                int_char[v[i]] = s[i];
                char_int[s[i]] = v[i];
            }
            
            if(flag) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}


  