#include <bits/stdc++.h>
using namespace std;

int solve(int l, int r, int a){
    while(a>0 and l != r){
        if(l<r){
            l++;
        }else if(l>r){
            r++;
        }
        a--;
    }
    l += a/2;
    r += a/2;
    return 2*min(l,r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r, a;
    cin >> l >> r >> a;
    
    cout << solve(l,r,a);
    
    return 0;
}
