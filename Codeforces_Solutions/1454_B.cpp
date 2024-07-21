#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
    
        for(int i=0; i<n; i++) cin >> v[i];
        map<int, vector<int>> elmn_to_indx;
        for(int i=0; i<n; i++) elmn_to_indx[v[i]].push_back(i);
        
        int res = INT_MAX, ans = -1;
        for(auto &el: elmn_to_indx)
        {
            if(el.second.size() == 1){
                if(el.first < res){
                    res = el.first;
                    ans = el.second[0];
                }
            }
        }
        
        if(ans == -1){
            cout << -1 << endl;
        }
        else{
            cout << ans+1 << endl;
        }
    }
    
    return 0;
}
