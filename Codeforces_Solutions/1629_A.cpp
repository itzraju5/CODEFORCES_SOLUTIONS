#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        
        vector<pair<int, int>> pairs(n);
        
        for(int i=0; i<n; i++) cin >> pairs[i].first;
        for(int i=0; i<n; i++) cin >> pairs[i].second;
        
        sort(pairs.begin(), pairs.end());
      
        int res = k;
        for(auto &el:pairs)
        {
            if(res<el.first)
            { 
                break;   
            }
            res += el.second;   
        }
        cout << res << endl;
    }
    return 0;
}
