#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    vector<pair<int, int>> vp;
    for(int i=0; i<n; i++){
        cin >> v[i];
        vp.push_back({v[i], i});
    }
    
    sort(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b){
        return a.first > b.first;
    });
    
    int shorts(0), x(0);
    for(auto i: vp){
        shorts += ((i.first * x) + 1);
        x++;
    }
    
    cout << shorts << endl;
    for(auto i: vp) cout << i.second + 1 << " ";
    
    return 0;
}

