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
        
        int cnt(0);
        while(n>1){
            if(n>=4 && n%4 == 0){
                cnt += n/4;
                break;
            }else{
                n -= 2;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
