#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<long long> vol(n), cap(n);
    for(int i=0; i<n; i++) cin >> vol[i];
    for(int i=0; i<n; i++) cin >> cap[i];
    
    long long total = accumulate(begin(vol), end(vol), 0LL);
    sort(rbegin(cap), rend(cap));
    
    if(1LL * (cap[0] + cap[1]) >= total) cout << "YES";
    else cout << "NO";
    
    
    return 0;
}
