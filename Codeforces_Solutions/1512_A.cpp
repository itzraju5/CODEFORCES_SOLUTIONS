#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int max_times = 0;
        if(v[0] == v[1] || v[0] == v[2]){
            max_times = v[0];
        }else{
            max_times = v[1];
        }
        
        for(int i=0; i<n; i++)
        {
            if(v[i] != max_times){
                cout << i+1 << endl;
                break;
            }
        }
    }
    
    return 0;
}