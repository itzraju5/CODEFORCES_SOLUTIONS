#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        int arr[7] = {0};
        for(int i=0; i<n; i++) arr[s[i]-'A']++;
        
        int ans(0);
        for(int i=0; i<7; i++){
            ans +=  max(0, m-arr[i]);  
        }
        cout << ans << endl;
    }
    
    return 0;
}
