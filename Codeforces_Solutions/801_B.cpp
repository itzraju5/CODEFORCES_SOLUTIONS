#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string x,z;
    cin >> x >> z;
    
    bool flag = true;
    for(int i=0; i<x.length(); i++){
        if(x[i] < z[i]){
            flag = false;
            break;
        }
    }
    
    if(flag) cout << z;
    else cout << -1;
    
    return 0;
}