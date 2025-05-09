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
        
        int total_sum = accumulate(begin(v), end(v), 0);
        if(total_sum == 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            if(total_sum > 0) sort(begin(v), end(v), greater<int>());
            else sort(begin(v), end(v));
            for(auto i: v) cout << i << " ";
            cout << endl;
        }
    }
    
    
    return 0;
}
