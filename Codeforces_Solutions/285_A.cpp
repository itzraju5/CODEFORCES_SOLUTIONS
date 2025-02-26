#include <bits/stdc++.h>
using namespace std;
 
void solve(vector<int> &v, int n, int k){
    reverse(v.begin(), v.begin()+k+1);
    for(auto i: v){
        cout << i << " ";
    }
    return;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i] = i+1;
    }
    
    solve(v, n, k);
    
    return 0;
}

