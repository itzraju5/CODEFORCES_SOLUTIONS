#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int total_given(0), stored(0);     
    for(int i=0; i<n; i++){
        stored += v[i];
        int give = min(8, stored);
        stored -= give;
        total_given += give;
        if(total_given >= k){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    
    return 0;
}
