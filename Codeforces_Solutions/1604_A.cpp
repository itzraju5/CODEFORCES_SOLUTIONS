#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int cnt(0);
        for(int i=0; i<n; i++)
        {
            cnt = max(cnt, (v[i]-i));
        }
        
        if(cnt == 0)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << cnt-1 << endl;
        }
    }
    
    return 0;
}

// we assue here 0-based indexing so in last we subtract 1