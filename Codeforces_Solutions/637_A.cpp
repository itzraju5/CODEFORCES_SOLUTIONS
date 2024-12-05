#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];
    
    map<int, int> mp1, mp2;
    for(auto &i: v) mp1[i]++;
    
    auto maxi = max_element(mp1.begin(), mp1.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });
    
    int res(-1), maxm = maxi->second;
    
    for(auto &i: v){
        mp2[i]++;
        if(mp2[i] == maxm){
            res = i;
            break;
        }
    }
    
    cout << res << endl;
    return 0;
}
