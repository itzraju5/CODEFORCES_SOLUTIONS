#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> cost(n);
    for(int i=0; i<n; i++) cin >> cost[i];
    
    int m;
    cin >> m;
    
    vector<int> cuppons(m);
    for(int i=0; i<m; i++) cin >> cuppons[i];
    
    sort(rbegin(cost), rend(cost));
    long long total = accumulate(begin(cost), end(cost), 0LL);
    
    for(int i=0; i<m; i++){
        cout << total - cost[cuppons[i]-1] << endl;
    }
    return 0;
}