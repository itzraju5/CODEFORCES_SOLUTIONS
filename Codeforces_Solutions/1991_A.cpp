#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        
        int maxi(0);
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0){
                maxi = max(maxi, v[i]);
            }
        }
        cout << maxi << endl;
    }
    return 0;       
}
