#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int > v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int odd_cnt = 0, even_cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0 && v[i]%2 != 0)
            {
                odd_cnt++;
            }
            else
            {
                if(i%2 != 0 && v[i]%2 == 0) even_cnt++;
            }
        }
        
        if(even_cnt == odd_cnt)
        {
            cout << odd_cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
    return 0;
}