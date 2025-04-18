#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int pos1 = 0, posn = 0;
    for(int i=0; i<n; ++i){
        if(v[i] == 1) pos1 = i;
        if(v[i] == n) posn = i;
    }

    int ans = abs(pos1 - posn);
    
    ans = max(ans, abs(0 - posn));
    ans = max(ans, abs(n - 1 - posn));
    ans = max(ans, abs(pos1 - 0));
    ans = max(ans, abs(pos1 - (n - 1))); 
    
    cout << ans;
    
    return 0;
}
