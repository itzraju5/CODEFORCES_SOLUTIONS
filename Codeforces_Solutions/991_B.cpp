#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    double total_sum = accumulate(begin(v), end(v), 0.0);
    if(total_sum / n >= 4.5) {
        cout << 0 << endl;
        return 0;
    }
    
    int cnt(0);
    sort(begin(v), end(v));
    for(int i=0; i<n && total_sum / n < 4.5; i++){
        total_sum += (5 - v[i]);
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
