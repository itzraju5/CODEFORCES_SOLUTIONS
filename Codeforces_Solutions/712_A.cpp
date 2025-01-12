#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
        
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    vector<int>b;
    for(int i=0; i<n-1; i++){
        b.push_back(a[i]+a[i+1]);
    }
    b.push_back(a[n-1]);
    
    for(auto i: b) cout << i << " ";
    
    return 0;
}
