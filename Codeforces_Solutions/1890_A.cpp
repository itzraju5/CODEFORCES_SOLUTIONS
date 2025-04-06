#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &nums, int n){
    if(n <= 2) return true;
    
    map<int, int> mp;
    for(auto i: nums) mp[i]++;
    
    if(mp.size() == 1) return true;
    else if(mp.size() == 2){
        int a = mp.begin()->second;
        int b = next(mp.begin()) -> second;
        if(abs(a-b) >= 2) return false;
        else return true;
    }
    return false;
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
        
        if(solve(v, n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}


  