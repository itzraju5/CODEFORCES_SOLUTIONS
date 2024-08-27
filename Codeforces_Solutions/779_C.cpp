#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n, k;
    cin >> n >> k;
    
    vector<int>a(n), b(n);
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    
    vector<pair<int, int>> ps;
    for(int i=0; i<n; i++){
        ps.push_back({a[i]-b[i], i});
    }
    
    sort(ps.begin(), ps.end());
    
    int cnt(0);
    for(int i=0; i<k; i++)
    {
        cnt += a[ps[i].second]; // Buy k items 
    }
    
    for(int i=k; i<n; i++)
    {
        cnt += min(a[ps[i].second], b[ps[i].second]);
    }
    cout << cnt << endl;
    
    return 0;
}
