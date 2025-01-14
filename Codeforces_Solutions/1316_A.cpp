#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int total_sum = accumulate(begin(v), end(v), 0);
        cout << min(total_sum, m) << endl;
    }
    
    return 0;
}
