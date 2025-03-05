#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n, s;
    cin >> n >> s;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    
    int mid = n/2;
    long long cnt(0);
    
    if(v[mid] == s){
        cout << 0 << endl;
        return 0;
    }
    if(v[mid] < s){
        for(int i=mid; i<n; i++){
            if(v[i] < s) cnt += (s - v[i]);
        }
    }else{
        for(int i=0; i<=mid; i++){
            if(v[i] > s) cnt += (v[i] - s);
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}

