#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &v, int n){
    vector<int> temp = v;
    sort(begin(temp), end(temp));
    if(temp == v) return 0;
    else if(v[0] == 1 || v[n-1] == n) return 1;
    else if(v[0] == n and v[n-1] == 1) return 3;
    else return 2;
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
