#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(begin(v), end(v));
    
    int mini = INT_MAX, cnt(0);
    for(int i=1; i<n; i++){
        mini = min(mini, (v[i] - v[i-1]));
    } 
    
    for(int i=1; i<n; i++)
    {
        if(mini == (v[i] - v[i-1])) cnt++;
    }
    
    cout << mini << " " << cnt;
    return 0;
}
