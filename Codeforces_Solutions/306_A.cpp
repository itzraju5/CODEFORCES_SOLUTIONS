#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    int candies = n/m;
    int extra = n%m;
    
    vector<int>v(m, candies);
    for(int i=0; i<extra; i++) v[i]++;
    for(auto i: v) cout << i << " ";
    
    return 0;
}