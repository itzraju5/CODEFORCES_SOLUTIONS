#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    long long wait_time(0);
    int cnt(0);
    
    for(int i=0; i<n; i++){
        if(wait_time <= v[i]){
            cnt++;
            wait_time += v[i];
        }
    }
    cout << cnt << endl;
        
    return 0;
}

