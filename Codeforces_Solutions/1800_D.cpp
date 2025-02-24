#include <bits/stdc++.h>
using namespace std;
 

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int extra_cnt(0);
        for(int i=0; i<n-2; i++){
            if(s[i] == s[i+2]) extra_cnt++;
        }
        cout << n - 1 - extra_cnt << endl;
    }
    
    return 0;
}

