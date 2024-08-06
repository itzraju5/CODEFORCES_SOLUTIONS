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
        
        unordered_map<int, int> mp;
        for(auto &el:v) mp[el]++;
        int max_freq = 1, unique = mp.size();
        
        for(auto &el: mp)
        {
            max_freq = max(max_freq, el.second);
        }
        
        if(max_freq == unique)
        {
            cout << min(max_freq, unique) - 1 << endl;
        }
        else
        {
            cout << min(max_freq, unique)<<endl;
        }
    }
    
    return 0;
}