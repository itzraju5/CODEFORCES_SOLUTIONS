#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);      

    int n, m;
    cin >> n >> m;
    
    int minimum_moves(ceil(n/2.0));
    for(int i=minimum_moves; i<=n; i++){
        if(i%m == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
