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
        
        string s1, s2;
        cin >> s1 >> s2;
        
        bool flag = true;
        for(int i=0; i<n; i++){
            if((s1[i] == s2[i]) or (s1[i] == 'G' and s2[i] == 'B') or (s1[i] == 'B' and s2[i] == 'G')){
                continue;
            }else{
                flag = false;
                break;
            }
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
