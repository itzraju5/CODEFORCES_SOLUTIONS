#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int total_sum = accumulate(begin(v), end(v), 0);
    
    int neg(0), pos(0);
    for(int i=0; i<n; i++)
    {
        if(v[i] < 0) neg += v[i];
        else pos += v[i];
    }
    if(neg == 0){
        cout << total_sum;
    }else{
        cout << pos-neg;
    }
}