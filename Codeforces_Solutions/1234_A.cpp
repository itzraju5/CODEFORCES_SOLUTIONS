#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        long long sum = accumulate(begin(v), end(v), 0LL);
        cout << (sum + n - 1) / n << endl;
    }
    
    return 0;
}
