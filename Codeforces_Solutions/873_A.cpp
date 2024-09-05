#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); 
    
    int n, k, x;
    cin >> n >> k >> x;
    
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int sum = accumulate(begin(v), end(v), 0);
    int res(0);
    for(int i=n-1; i>=0; i--)
    {
        if(v[i] > x && k != 0){
            res += x;
            k--;
            sum -= v[i];
        }else{
            break;
        }
    }
    cout << sum+res;
    
    return 0;
}
