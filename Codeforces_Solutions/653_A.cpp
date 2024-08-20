#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    unordered_map<int, int> mp;
    for(auto &i:v) mp[i]++;
    
    string res = "NO";
    for(auto &el:mp)
    {
        int key = el.first;
        if((mp.find(key+1) != mp.end()) && (mp.find(key+2) != mp.end())){
            res = "YES";
            break;
        }
    }
    cout << res;
    
    return 0;
}
