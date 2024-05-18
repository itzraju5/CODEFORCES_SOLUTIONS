#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        int n, digit;
        cin >> n >> digit;
        string s;
        cin >> s;
        
        string res = "";
        int i;
        for(i = 0; i < n; i++)
        {
            if(s[i] - '0' < digit)
            {
                res += (digit + '0');
                break;
            }
            res += s[i];
        }
        
        if(i == n){
            res += (digit + '0');
        }else{
            res += s.substr(i);
        }
        
        cout << res << endl;
    }
    
    return 0;
}
