#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        int cnt_0(0), cnt_1(0), remove(0);
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0') cnt_0++;
            else cnt_1++;
            
            if(cnt_1 > cnt_0){
                remove = max(remove, cnt_0);
            }
            if(cnt_0 > cnt_1){
                remove = max(remove, cnt_1);
            }
        }
        cout << remove << endl;
    }
    return 0;
}
