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
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        
        int cnt_odd = 0, cnt_even = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] % 2 != 0) cnt_odd++;
            else cnt_even++;
        }
        cout << min(cnt_even, cnt_odd) << endl;
    }
    
	return 0;
}