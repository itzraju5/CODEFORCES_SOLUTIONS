#include <bits/stdc++.h>
using namespace std;

bool solve(int x)
{
    if(x<0) return false;
    int num = sqrt(x);
    
    return num*num == x;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int res = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(!solve(v[i])){
            res = max(res, v[i]);
        }
    }
    cout << res;
    
    return 0;
}
