#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &v, int n){
    sort(begin(v), end(v));
    
    if(v[0] == v[n-1]) return 1LL * n * (n-1);
    int cnt_min(0), cnt_max(0);
    for(int i=0; i<n && v[i] == v[0]; i++) cnt_min++;
    for(int i=n-1; i>0 && v[i] == v[n-1]; i--) cnt_max++;
    return 2LL * cnt_min * cnt_max;
}

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
        
        cout << solve(v, n) << endl; 
    }
    
    return 0;
}
