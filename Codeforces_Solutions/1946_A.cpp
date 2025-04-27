#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++) cin >> a[i];
        
        
        sort(a.begin(), a.end());
        
        int median_index = (n-1) / 2;
        int median_value = a[median_index];
        
        int cnt(0);
        for(int i=median_index; i<n; i++) if(a[i] == median_value) cnt++;
        
        cout << cnt << endl;
    }
    
    return 0;
}

