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
        
        vector<long long> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        if(n==1){
            cout << v[0] << endl;
        }else{
            long long sum = accumulate(begin(v), end(v), 0LL);
            cout << sum - (n-1) << endl;
        }
    }
    
    return 0;
}
