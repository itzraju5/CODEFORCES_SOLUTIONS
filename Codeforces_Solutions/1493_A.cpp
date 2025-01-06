#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k){
    vector<int>v;
    
    for(int i=k+1; i<=n; i++) v.push_back(i);
    if(k%2 == 0){
        for(int i=k-1; i>=k/2; i--) v.push_back(i);
    }else if(k%2 != 0){
        for(int i=k-1; i>k/2; i--) v.push_back(i);
    }
    
    cout << v.size() << endl;
    if(v.size() != 0){
        for(auto i: v) cout << i << " ";
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
       int n, k;
       cin >> n >> k;
       solve(n, k);
    }

    return 0;
}
