#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&v, int n){
    if(n == 1) return 0;
    sort(begin(v), end(v));
    
    int i=0, j=n-1, cost(0);
    
    while(i<j){
        cost += (v[j]-v[i]);
        i++;
        j--;
    }
    return cost;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int>v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << solve(v, n) << endl;
    }
    
    return 0;
}