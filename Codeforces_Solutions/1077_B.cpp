#include <bits/stdc++.h>
using namespace std;
 
int solve(vector<int> &arr, int n){
    int cnt(0);
    for(int i=1; i<n-1; i++){
        if(arr[i-1]==1 and arr[i]==0 and arr[i+1]==1){
            cnt++;
            arr[i+1] = 0;
        }
    }
    return cnt;
}
 
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    cout << solve(v, n);
    
    return 0;
}