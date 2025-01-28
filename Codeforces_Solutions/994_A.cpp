#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> sequence(n);
    for(int i=0; i<n; i++) cin >> sequence[i];
    
    set<int> fingerprints;
    for(int i=0; i<m; i++){
        int key;
        cin >> key;
        fingerprints.insert(key);
    }
    
    vector<int>ans;
    for(auto i: sequence){
        if(fingerprints.count(i)) ans.push_back(i);
    }
    
    for(auto i: ans) cout << i << " ";
    
    return 0;
}