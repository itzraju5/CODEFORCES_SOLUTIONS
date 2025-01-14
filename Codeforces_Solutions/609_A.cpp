#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    int m;
    cin >> m;
    
    vector<int>v(n);
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        v[i] = num;
    }
    
    sort(rbegin(v), rend(v));
    int cnt(0), i(0);
    while(m > 0){
        m -= v[i++];
        cnt++;
    }
    
    cout << cnt;
    
    return 0;
}


