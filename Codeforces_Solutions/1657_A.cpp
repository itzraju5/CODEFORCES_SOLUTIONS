#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquaredis(int n){
    int root = sqrt(n);
    return root * root == n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int x, y;
        cin >> x >> y;
        
        int dis = x*x + y*y;
        if(dis == 0) cout << 0 << endl;
        else if(isPerfectSquaredis(dis)){
            cout << 1 << endl;
        }else cout << 2 << endl;
    }
    
    return 0;
}
