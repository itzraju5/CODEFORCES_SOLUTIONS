#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    cin >> n; 
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(begin(v), end(v));
    
    long long ans(0);
    for(int i=0; i<n/2; i++){
        int sum = v[i] + v[n-i-1];
        ans += (long long)sum * sum;
    }
    cout << ans << endl;
    
    return 0;
}