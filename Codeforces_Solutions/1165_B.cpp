#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);      

    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(begin(v), end(v));
    
    int day(1), i(0), cnt(0);
    while(i<n){
        if(v[i] >= day){
            cnt++;
            day++;
        }
        i++;
    }
    
    cout << cnt << endl;
    
    return 0;
}
