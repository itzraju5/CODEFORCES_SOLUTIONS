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
        
        int res[n];
        for(int i=n-1; i>=0; i--){  // Read input in reverse order
            string row;
            cin >> row;
            for(int j=0; j<4; j++){
                if(row[j] == '#'){
                    res[i] = j+1;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++) cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
