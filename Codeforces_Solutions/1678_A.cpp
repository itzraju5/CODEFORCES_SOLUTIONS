#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int n){
    set<int> st;
    int cnt(0);
    for(auto i:nums){
        if(i == 0) cnt ++;
        st.insert(i);
    }
    if(cnt != 0){
        return n-cnt;
    }else if(cnt == 0 and st.size() < n){
        return n;
    }
    return n+1;
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
        
        int ans = solve(v, n);
        cout << ans << endl;
    }
    
    return 0;
}
