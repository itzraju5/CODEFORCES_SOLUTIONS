#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    int min_val = *min_element(begin(v), end(v));
    
    int res = INT_MAX;
    int prev = -1;
    for(int i=0; i<n; i++)
    {
        if(v[i] == min_val){
            if(prev != -1){
                 res = min(res, i-prev);
            }
            prev = i;
        }
    }
    
    cout << res;
    
    return 0;       
}

