#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a) {
    int totalSum = 0, negSum = 0;
    for (int x : a) {
        totalSum += x;
        if (x < 0) negSum += x;  
    }
    return totalSum - 2 * negSum; 
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        cout << solve(v) << endl;
    }
    
    return 0;
}

