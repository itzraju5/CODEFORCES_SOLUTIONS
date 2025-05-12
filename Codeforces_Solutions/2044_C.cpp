#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        
        long long total = 2*m;
        
        long long cnt1(0), cnt2(0);
        cnt1 = min(a, m);
        total -= cnt1;
        
        cnt2 = min(b, m);
        total -= cnt2;
        
        cout << cnt1 + cnt2 + min(total, c) << endl;
    }
    
    return 0;
}